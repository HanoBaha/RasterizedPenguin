#include "../headers/int3.h"

#include <iostream>
#include <math.h>

int3::int3(int _x, int _y, int _z) {
    x = _x;
    y = _y;
    z = _z;
}
int3::int3(const int3& a) {
    x = a.x;
    y = a.y;
    z = a.z;
}
int3 int3::operator=(const int3& a) {
    x = a.x;
    y = a.y;
    z = a.z;
    return *this;
}

std::ostream& operator<<(std::ostream& flux, const int3& a) {
    flux << "(" << a.x << ", " << a.y << ", " << a.z << ")";
    return flux;
}

int3 int3::operator+(const int3& a) const {
    return {x + a.x, y + a.y, z + a.z};
}
int3 int3::operator-(const int3& a) const {
    return {x - a.x, y - a.y, z - a.z};
}
int3 int3::operator*(const int3& a) const {
    return {x * a.x, y * a.y, z * a.z};
}
int3 int3::operator/(const int3& a) const {
    return {x / a.x, y / a.y, z / a.z};
}
int3 int3::operator+=(const int3& a) {
    x += a.x;
    y += a.y;
    z += a.z;
    return *this;
}
int3 int3::operator-=(const int3& a) {
    x -= a.x;
    y -= a.y;
    z -= a.z;
    return *this;
}
int3 int3::operator*=(const int3& a) {
    x *= a.x;
    y *= a.y;
    z *= a.z;
    return *this;
}
int3 int3::operator/=(const int3& a) {
    x /= a.x;
    y /= a.y;
    z /= a.z;
    return *this;
}

int3 int3::operator+(const int& a) const {
    return {x + a, y + a, z + a};
}
int3 int3::operator-(const int& a) const {
    return {x - a, y - a, z - a};
}
int3 int3::operator*(const int& a) const {
    return {x * a, y * a, z * a};
}
int3 int3::operator/(const int& a) const {
    return {x / a, y / a, z / a};
}
int3 int3::operator+=(const int& a) {
    x += a;
    y += a;
    z += a;
    return *this;
}
int3 int3::operator-=(const int& a) {
    x -= a;
    y -= a;
    z -= a;
    return *this;
}
int3 int3::operator*=(const int& a) {
    x *= a;
    y *= a;
    z *= a;
    return *this;
}
int3 int3::operator/=(const int& a) {
    x /= a;
    y /= a;
    z /= a;
    return *this;
}

bool int3::operator==(const int3& a) const {
    return (x == a.x && y == a.y && z == a.z);
}

int int3::dot(const int3& a) const {
    return x * a.x + y * a.y + z * a.z;
}
float int3::norm() const {
    return sqrt(x * x + y * y + z * z);
}
