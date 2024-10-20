#pragma once

#include <SFML/Graphics.hpp>

class Window;
class UpdatingObject;
class VisualObject;

// class that has abstract basic rendering methods
class DrawingTool {
public:
};

//
class Canvas {
private:
	Canvas();

	static Canvas* p_self;

	sf::RenderTexture* canvas;

	// draw one visual object
	// ingnore z-index
	void draw(const VisualObject*);

public:
	static Canvas* self();

	void sort(const UpdatingObject* start_ptr, const UpdatingObject* end_ptr);
	// draw nodes on screen
	// ignore z-index
	void draw(const UpdatingObject* start_ptr, const UpdatingObject* end_ptr);
	
	// clear the screen
	void clear();
};