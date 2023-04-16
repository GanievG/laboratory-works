#include"Header.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wcex{};
    HWND hWnd;
    MSG msg;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style = CS_HREDRAW | CS_VREDRAW;

    wcex.lpfnWndProc = WndProc;

    wcex.cbClsExtra = 0;

    wcex.cbWndExtra = 0;

    wcex.hInstance = hInstance;

    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));

    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    wcex.lpszMenuName = NULL;

    wcex.lpszClassName = L"MainWindowClass";

    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_APPLICATION));

    if (!RegisterClassEx(&wcex))
    {
        return 0;
    }

    hWnd = CreateWindow(L"MainWindowClass", L"Classic Windows Application", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL, hInstance, NULL);

    if (!hWnd)
    {
        return 0;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    for (Figure* figure : figures)
    {
        delete figure;
    }
    return (int)msg.wParam;
}

