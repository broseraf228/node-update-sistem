#include "node.hpp"

#include "GlobalManager.hpp"

UpdatingObject::UpdatingObject() {
}
UpdatingObject::~UpdatingObject() {

}

void UpdatingObject::_free() {
	is_exist = false;
}
void UpdatingObject::_update(float delta) {
	update(delta);
}
void UpdatingObject::update(float delta) {
}
void UpdatingObject::ready() {

}
