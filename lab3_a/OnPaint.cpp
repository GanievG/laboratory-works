#include"OnPaint.h"
#include"Vector2D.h"
#include"DrawEllipse.h"
void OnPaint(HWND hwnd) 
{
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hwnd, &ps);

    // ������ ��������� ����� � ��� ������
    Vector2D start(50, 50);
    Vector2D step(100, 100);

    // ������ 9 ����������� � ��������� �����������
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            DrawEllipse(hdc, start + i * step + j * step / 3, 24, 24);
        }
    }

    EndPaint(hwnd, &ps);
}
