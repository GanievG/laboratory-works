#include"DrawEllipse.h"
void DrawEllipse(HDC hdc, const Vector2D& center, const double& radiusX, const double& radiusY)
{
    Ellipse(hdc, int(center.getX() - radiusX), int(center.getY() - radiusY),
        int(center.getX() + radiusX), int(center.getY() + radiusY));
}