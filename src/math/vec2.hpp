#pragma once

struct vec2 {
public:
	float x, y;

	vec2();
	vec2(float s);
	vec2(float x, float y);

	vec2 operator+(const vec2&);
	vec2 operator-(const vec2&);
	vec2 operator/(float);
	vec2 operator*(float);
	vec2 operator+=(const vec2&);
	vec2 operator-=(const vec2&);
	vec2 operator*=(float);
	vec2 operator/=(float);
	
};