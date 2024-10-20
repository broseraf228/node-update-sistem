#include "vec2.hpp"

vec2::vec2() : vec2(0) {}
vec2::vec2(float s) : vec2(0, 0) {}
vec2::vec2(float x, float y) 
{
	this->x = x, this->y = y;
}

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
