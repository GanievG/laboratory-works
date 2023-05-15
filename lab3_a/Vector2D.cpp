#include "Vector2D.h"

Vector2D::Vector2D(const double& x, const double& y) : x(x), y(y) {}
Vector2D::~Vector2D() {}

const double Vector2D::getX() const
{
    return x;
}

const double Vector2D::getY() const
{
    return y;
}

void Vector2D::setX(const double& x)
{
    this->x = x;
}

void Vector2D::setY(const double& y)
{
    this->y = y;
}

// Оператор сложения векторов
Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
    return Vector2D(v1.x + v2.x, v1.y + v2.y);
}

// Оператор вычитания векторов
Vector2D operator-(const Vector2D& v1, const Vector2D& v2) {
    return Vector2D(v1.x - v2.x, v1.y - v2.y);
}

// Оператор умножения вектора на число
Vector2D operator*(const double& k, const Vector2D& v) {
    return Vector2D(k * v.x, k * v.y);
}

Vector2D operator/(const Vector2D& v, const double& k)
{
    if (k != 0)
    {
        return Vector2D((v.getX()) / k, (v.getY()) / k);
    }
    else
    {
        return Vector2D((v.getX()), (v.getY()));
    }
}

Vector2D& Vector2D::operator = (const Vector2D& v) 
{
    this->x = v.x;
    this->y = v.y;
    return *this;
}
