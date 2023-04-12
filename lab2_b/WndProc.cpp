#include "WndProc.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    HDC hdc;
    PAINTSTRUCT ps;
    switch (message)
    {
        case WM_CREATE:
        {
            Circle* circle = new Circle(50, 50, 20);
            RECTANGLE* rectangle = new RECTANGLE(100, 100, 50, 30);
            figures.push_back(circle);
            figures.push_back(rectangle);
            break;
        }

        case WM_PAINT:
        {
            hdc = BeginPaint(hWnd, &ps);

            for (Figure* figure : figures)
            {
                if (dynamic_cast<Circle*>(figure))
                {
                    Circle* circle = dynamic_cast<Circle*>(figure);
                    circle->Draw(hdc);
                }

                else if (dynamic_cast<RECTANGLE*>(figure))
                {
                    RECTANGLE* rectangle = dynamic_cast<RECTANGLE*>(figure);
                    rectangle->Draw(hdc);
                }
            }

            EndPaint(hWnd, &ps);
            break;
        }

        case WM_DESTROY:
        {
            PostQuitMessage(0);
            break;
        }

        default:
        {
            return DefWindowProc(hWnd, message, wParam, lParam);
        }

    }

    return 0;
}