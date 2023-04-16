#pragma once
#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include "Figure.h"

class RECTANGLE :public Figure
{
public:
	RECTANGLE(const int& x, const int& y, const int& width, const int& height);
	void Draw(HDC hdc) override;

private:
	int m_x;
	int m_y;
	int m_width;
	int m_height;
};

#endif // !_RECTANGLE_H_
