#pragma once
#ifndef _VECTOR_H_
#define _VECTOR_H_

class Vector2D
{
private:
    double x, y;
public:
    Vector2D(const double& x, const double& y);

    const double getX() const;
    const double getY() const;
  
    void setX(const double& x);
   
    void setY(const double& y);
   
    friend Vector2D operator+(const Vector2D& v1, const Vector2D& v2);
    friend Vector2D operator-(const Vector2D& v1, const Vector2D& v2);
    friend Vector2D operator*(const double& k, const Vector2D& v);
    friend Vector2D operator*(const double& k, const Vector2D& v);
    friend Vector2D operator/(const Vector2D& v, const double& k);
    friend double operator*(const Vector2D& v1, const Vector2D& v2);

    Vector2D& operator = (const Vector2D& v);
    
    ~Vector2D();
};

#endif // !_VECTOR_H_
