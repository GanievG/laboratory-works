#include"lab3_a.h"


// Главная функция
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
    const wchar_t CLASSNAME[] = L"MyClass";

    // Регистрация класса окна
    WNDCLASS wc = {};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASSNAME;
    RegisterClass(&wc);

    // Создание окна
    HWND hwnd = CreateWindowEx(
        0,
        CLASSNAME,
        L"Ganiev",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 650, 450,
        NULL,
        NULL,
        hInstance,
        NULL
    );
    if (hwnd == NULL) {
        return 0;
    }

    // Отображение окна
    ShowWindow(hwnd, nCmdShow);

    // Запуск цикла обработки сообщений
    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}