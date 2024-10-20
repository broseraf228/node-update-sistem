#pragma once

#include "vec2.hpp"

struct mtrx2 {
	vec2 e1;
	vec2 e2;

	mtrx2();
	mtrx2(const vec2&, const vec2&);


};