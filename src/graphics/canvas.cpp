#include "canvas.hpp"

#include "../node.hpp"

Canvas::Canvas(){
	canvas->create(800, 600);
}

Canvas* Canvas::p_self = nullptr;



void Canvas::draw(const VisualObject* obj) {
	obj->draw(canvas);
}

void Canvas::draw(const UpdatingObject* start_ptr, const UpdatingObject* end_ptr) {
	for (const UpdatingObject* item = start_ptr; item != end_ptr; item++) {
		draw(item->get_visual_object());
	}
}

void Canvas::sort(const UpdatingObject* start_ptr, const UpdatingObject* end_ptr) {
	// add alghoritm later
}