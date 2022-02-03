#include "../headers/int2.h"

#include <iostream>
#include <math.h>

int2::int2(int _x, int _y) {
    x = _x;
    y = _y;
}
int2::int2(const int2& a) {
    x = a.x;
    y = a.y;
}
int2 int2::operator=(const int2& a) {
    x = a.x;
    y = a.y;
    return *this;
}

std::ostream& operator<<(std::ostream& flux, const int2& a) {
    flux << "(" << a.x << ", " << a.y << ")";
    return flux;
}

int2 int2::operator+(const int2& a) const {
    return {x + a.x, y + a.y};
}
int2 int2::operator-(const int2& a) const {
    return {x - a.x, y - a.y};
}
int2 int2::operator*(const int2& a) const {
    return {x * a.x, y * a.y};
}
int2 int2::operator/(const int2& a) const {
    return {x / a.x, y / a.y};
}
int2 int2::operator+=(const int2& a) {
    x += a.x;
    y += a.y;
    return *this;
}
int2 int2::operator-=(const int2& a) {
    x -= a.x;
    y -= a.y;
    return *this;
}
int2 int2::operator*=(const int2& a) {
    x *= a.x;
    y *= a.y;
    return *this;
}
int2 int2::operator/=(const int2& a) {
    x /= a.x;
    y /= a.y;
    return *this;
}

int2 int2::operator+(const int& a) const {
    return {x + a, y + a};
}
int2 int2::operator-(const int& a) const {
    return {x - a, y - a};
}
int2 int2::operator*(const int& a) const {
    return {x * a, y * a};
}
int2 int2::operator/(const int& a) const {
    return {x / a, y / a};
}
int2 int2::operator+=(const int& a) {
    x += a;
    y += a;
    return *this;
}
int2 int2::operator-=(const int& a) {
    x -= a;
    y -= a;
    return *this;
}
int2 int2::operator*=(const int& a) {
    x *= a;
    y *= a;
    return *this;
}
int2 int2::operator/=(const int& a) {
    x /= a;
    y /= a;
    return *this;
}

bool int2::operator==(const int2& a) const {
    return (x == a.x && y == a.y);
}

int int2::dot(const int2& a) const {
    return x * a.x + y * a.y;
}
float int2::norm() const {
    return sqrt(x * x + y * y);
}
