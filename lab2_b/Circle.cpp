#include "Circle.h"

Circle::Circle(const int& x, const int& y, const int& radius) : m_x(x), m_y(y), m_radius(radius) {}

void Circle::Draw(HDC hdc) 
{
	Ellipse(hdc, m_x - m_radius, m_y - m_radius, m_x + m_radius, m_y + m_radius);
}