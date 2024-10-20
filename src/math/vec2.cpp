#include "vec2.hpp"
#include "math.h"

vec2 const vec2::ex = vec2(1, 0);
vec2 const vec2::ey = vec2(0, 1);

vec2::vec2() : vec2(0) {}
vec2::vec2(float s) : vec2(0, 0) {}
vec2::vec2(float x, float y) : x{x}, y{y} {}

vec2 vec2::operator+(const vec2& other) 
{
	return vec2(this->x + other.x, this->y + other.y);
}
vec2 vec2::operator-(const vec2& other) 
{
	return vec2(this->x - other.x, this->y - other.y);
}
vec2 vec2::operator/(float other) 
{
	return vec2(this->x / other, this->y / other);
}
vec2 vec2::operator*(float other) 
{
	return vec2(this->x * other, this->y * other);
}
vec2 vec2::operator+=(const vec2& other) 
{
	this->x += other.x, this->y += other.y;
}
vec2 vec2::operator-=(const vec2& other) 
{
	this->x -= other.x, this->y -= other.y;
}
vec2 vec2::operator/=(float other) 
{
	this->x /= other, this->y /= other;
}
vec2 vec2::operator*=(float other) 
{
	this->x *= other, this->y *= other;
}

float vec2::lenght() {
	return  sqrtf(x * x + y * y);
}
vec2 vec2::normalized() {
	float l = lenght();
	return  vec2(x / l, y / l);
}
float vec2::sclMul(const vec2& a, const vec2& b) {
	return (a.x * b.x + a.y * b.y);
}
