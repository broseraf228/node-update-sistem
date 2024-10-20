#pragma once

#include "window.hpp"

class Input {
private:
	static int* keys;
	static float* keys_time;
public:
	static bool is_close;
	static void handle_events(float delta);

	static bool key_is_pressed(sf::Keyboard::Key key);
	static bool key_just_pressed(sf::Keyboard::Key key);
	static float key_time_pressed(sf::Keyboard::Key key);
};