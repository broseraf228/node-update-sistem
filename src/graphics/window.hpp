#pragma once

#include <SFML/Graphics.hpp>

// just create and store sf::RenderWindow object to global access
class Window {
private:
	Window();

	static Window* p_self;
public:
	static Window* self();
	static void close();

	sf::RenderWindow* window = nullptr;
};