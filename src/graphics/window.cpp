#include "window.hpp"

Window* Window::p_self = nullptr;

Window* Window::self() {
	if (p_self)
		return p_self;
	p_self = new Window();
}
void Window::close() {
	if (!p_self)
		return;
	p_self->window->close();
}

Window::Window() {
	window = new sf::RenderWindow(sf::VideoMode(800, 600), "My window");
}