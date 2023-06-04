
#include"Header.h"
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

class Command {
public:
    virtual void execute() = 0;
};

class AboutCommand : public Command {
private:
    HINSTANCE hInst;
    HWND hWnd;
public:
    AboutCommand(HINSTANCE inst, HWND wnd) : hInst(inst), hWnd(wnd) {}

    void execute() override {
        DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
    }
};

class ExitCommand : public Command {
private:
    HWND hWnd;
public:
    ExitCommand(HWND wnd) : hWnd(wnd) {}

    void execute() override {
        DestroyWindow(hWnd);
    }
};

class Window {
private:
    Command* command;
public:
    void setCommand(Command* cmd) {
        command = cmd;
    }

    void onCommand() {
        command->execute();
    }
};

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
     static Window window;
     static HINSTANCE hInst;//закоментить
     static PAINTSTRUCT ps;
    //static HINSTANCE hInst = GetModuleHandle(NULL);

    static std::map<int, Command*> commands = { {IDM_ABOUT, new AboutCommand(hInst, hWnd)},
                                                {IDM_EXIT, new ExitCommand(hWnd)} };

    map<int, Command*>::iterator it = commands.find(LOWORD(wParam));

    (!(message == WM_COMMAND && it != commands.end()) || (window.setCommand(it->second), window.onCommand(), 0));
    //(void)
    //(void)(!(message == WM_PAINT)) || (PAINTSTRUCT ps, HDC hdc = BeginPaint(hWnd, &ps), EndPaint(hWnd, &ps), 0);//проблема здесь
    if (message == WM_PAINT)    
    {
        HDC hdc = BeginPaint(hWnd, &ps);
        MoveToEx(hdc, 2050/*длина линии*/, 1235/*координата конца линии*/, NULL);//программа рисует, учитывая длину и координаты конца линии! 
        LineTo(hdc, 0, 0);//координаты начала 
        EndPaint(hWnd, &ps);
    }

    (void)(!(message == WM_DESTROY) || (PostQuitMessage(0), 0));

    return DefWindowProc(hWnd, message, wParam, lParam);
}



INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wcex{};
    const TCHAR szWindowClass[] = _T("MyWindowClass");
    const TCHAR szTitle[] = _T("Ganiev");
    // Определение класса окна
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_APPLICATION));
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = MAKEINTRESOURCE(IDC_MYAPP);
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    if (!RegisterClassEx(&wcex)) {
        MessageBox(NULL,
            _T("Call to RegisterClassEx failed!"),
            _T("Win32 Guided Tour"),
            NULL);

        return 1;
    }

    // Создание окна
    HWND hWnd = CreateWindow(
        szWindowClass,
        szTitle,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT,
        780, 500,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (!hWnd) {
        MessageBox(NULL,
            _T("Call to CreateWindow failed!"),
            _T("Win32 Guided Tour"),
            NULL);

        return 1;
    }

    // Отображение окна
    ShowWindow(hWnd,nCmdShow);
    UpdateWindow(hWnd);

    // Цикл обработки сообщений
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}



