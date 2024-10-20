#pragma once

struct vec2 {
public:
	static vec2 const ex, ey;

	float x, y;

	vec2();
	vec2(float s);
	vec2(float x, float y);

	vec2 operator+(vec2 const&);
	vec2 operator-(vec2 const&);
	vec2 operator/(float);
	vec2 operator*(float);
	vec2 operator+=(vec2 const&);
	vec2 operator-=(vec2 const&);
	vec2 operator*=(float);
	vec2 operator/=(float);

	float lenght();
	vec2 normalized();

	// scallar multiplication
	static float sclMul(vec2 const &, vec2 const &);
	
};