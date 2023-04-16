#include "RECTANGLE.h"

RECTANGLE::RECTANGLE(const int& x, const int& y, const int& width, const int& height) : m_x(x), m_y(y), m_width(width), m_height(height) {}

void RECTANGLE::Draw(HDC hdc) 
{
	Rectangle(hdc, m_x, m_y, m_x + m_width, m_y + m_height);
}