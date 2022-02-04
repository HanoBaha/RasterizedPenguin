#include "../headers/float2.h"

#include <iostream>
#include <math.h>

float2::float2(float _x, float _y) {
    x = _x;
    y = _y;
}
float2::float2(const float2& a) {
    x = a.x;
    y = a.y;
}
float2 float2::operator=(const float2& a) {
    x = a.x;
    y = a.y;
    return *this;
}

std::ostream& operator<<(std::ostream& flux, const float2& a) {
    flux << "(" << a.x << ", " << a.y << ")";
    return flux;
}

float2 float2::operator+(const float2& a) const {
    return {x + a.x, y + a.y};
}
float2 float2::operator-(const float2& a) const {
    return {x - a.x, y - a.y};
}
float2 float2::operator*(const float2& a) const {
    return {x * a.x, y * a.y};
}
float2 float2::operator/(const float2& a) const {
    return {x / a.x, y / a.y};
}
float2 float2::operator+=(const float2& a) {
    x += a.x;
    y += a.y;
    return *this;
}
float2 float2::operator-=(const float2& a) {
    x -= a.x;
    y -= a.y;
    return *this;
}
float2 float2::operator*=(const float2& a) {
    x *= a.x;
    y *= a.y;
    return *this;
}
float2 float2::operator/=(const float2& a) {
    x /= a.x;
    y /= a.y;
    return *this;
}

float2 float2::operator+(const float& a) const {
    return {x + a, y + a};
}
float2 float2::operator-(const float& a) const {
    return {x - a, y - a};
}
float2 float2::operator*(const float& a) const {
    return {x * a, y * a};
}
float2 float2::operator/(const float& a) const {
    return {x / a, y / a};
}
float2 float2::operator+=(const float& a) {
    x += a;
    y += a;
    return *this;
}
float2 float2::operator-=(const float& a) {
    x -= a;
    y -= a;
    return *this;
}
float2 float2::operator*=(const float& a) {
    x *= a;
    y *= a;
    return *this;
}
float2 float2::operator/=(const float& a) {
    x /= a;
    y /= a;
    return *this;
}

bool float2::operator==(const float2& a) const {
    return (x == a.x && y == a.y);
}

float float2::dot(const float2& a) const {
    return x * a.x + y * a.y;
}
float float2::norm() const {
    return sqrt(x * x + y * y);
}
