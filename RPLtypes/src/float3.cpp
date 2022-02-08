#include "../include/float3.h"

#include <iostream>
#include <math.h>

float3::float3(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}
float3::float3(const float3& a) {
    x = a.x;
    y = a.y;
    z = a.z;
}
float3 float3::operator=(const float3& a) {
    x = a.x;
    y = a.y;
    z = a.z;
    return *this;
}

std::ostream& operator<<(std::ostream& flux, const float3& a) {
    flux << "(" << a.x << ", " << a.y << ", " << a.z << ")";
    return flux;
}

float3 float3::operator+(const float3& a) const {
    return {x + a.x, y + a.y, z + a.z};
}
float3 float3::operator-(const float3& a) const {
    return {x - a.x, y - a.y, z - a.z};
}
float3 float3::operator*(const float3& a) const {
    return {x * a.x, y * a.y, z * a.z};
}
float3 float3::operator/(const float3& a) const {
    return {x / a.x, y / a.y, z / a.z};
}
float3 float3::operator+=(const float3& a) {
    x += a.x;
    y += a.y;
    z += a.z;
    return *this;
}
float3 float3::operator-=(const float3& a) {
    x -= a.x;
    y -= a.y;
    y -= a.z;
    return *this;
}
float3 float3::operator*=(const float3& a) {
    x *= a.x;
    y *= a.y;
    z *= a.z;
    return *this;
}
float3 float3::operator/=(const float3& a) {
    x /= a.x;
    y /= a.y;
    z /= a.z;
    return *this;
}

float3 float3::operator+(const float& a) const {
    return {x + a, y + a, z + a};
}
float3 float3::operator-(const float& a) const {
    return {x - a, y - a, z - a};
}
float3 float3::operator*(const float& a) const {
    return {x * a, y * a, z * a};
}
float3 float3::operator/(const float& a) const {
    return {x / a, y / a, z / a};
}
float3 float3::operator+=(const float& a) {
    x += a;
    y += a;
    z += a;
    return *this;
}
float3 float3::operator-=(const float& a) {
    x -= a;
    y -= a;
    z -= a;
    return *this;
}
float3 float3::operator*=(const float& a) {
    x *= a;
    y *= a;
    z *= a;
    return *this;
}
float3 float3::operator/=(const float& a) {
    x /= a;
    y /= a;
    z /= a;
    return *this;
}

bool float3::operator==(const float3& a) const {
    return (x == a.x && y == a.y && z == a.z);
}

float float3::dot(const float3& a) const {
    return x * a.x + y * a.y + z * a.z;
}
float float3::norm() const {
    return sqrt(x * x + y * y + z * z);
}
