#include"WndProc.h"
#include"OnPaint.h"
#include"OnDestroy.h"
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_PAINT:
        OnPaint(hwnd);
        break;
    case WM_DESTROY:
        OnDestroy(hwnd);
        break;
    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}