#pragma once
#ifndef _CIRCLE_H_
#define  _CIRCLE_H_
#include "Figure.h"

class Circle :public Figure
{
public:
	Circle(const int& x, const int& y, const int& radius);
	void Draw(HDC hdc) override;

private:
	int m_x;
	int m_y;
	int m_radius;
};

#endif // !_CIRCLE_ H_
