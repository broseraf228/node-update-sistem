#pragma once 

#include "../math/vec2.hpp"

// storing a position and dirtection in space
class PositionedStats {
protected:
	vec2 position;
	vec2 direction;
public:
	PositionedStats(const vec2& position, const vec2& direction);

	virtual const vec2& get_position();
	virtual const vec2& get_direction();
};