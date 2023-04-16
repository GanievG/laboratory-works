#pragma once
#ifndef _FIGURE_H_
#define _FIGURE_H_
#include <Windows.h>

class Figure
{
public:
	virtual void Draw(HDC hdc)  = 0;
	virtual ~Figure() = default;

};
#endif // !1

