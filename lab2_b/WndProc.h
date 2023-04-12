#pragma once
#ifndef _WNDPROC_H_
#define _WNDPROC_H_
#include<windows.h>
#include"Figure.h"
#include"Circle.h"
#include"RECTANGLE.h"
#include"globalvector.h"


LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

#endif // !_WNDPROC_H_
