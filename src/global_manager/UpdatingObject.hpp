#pragma once

class UpdatingObject {
public:
	UpdatingObject();

	// game manager call this method ever frame
	virtual void update(float delta) = 0;

	virtual bool is_exist() = 0;
};