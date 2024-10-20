#pragma once

#include "../graphics/visualObject.hpp"
#include "../phisics/phisicsObject.hpp"
#include "../global_manager/UpdatingObject.hpp"




// base node class
// you need add new node instance use GlobalManager::reg_node( node* )
class Node : 
	public UpdatingObject, 
	public PhisicsObject, 
	public VisualObject, 
{
private:
	int id = -1;
	int is_exist = false;

protected:
	// set is_exist to false (delete object on next frame)
	void _free();

public:
};