#include <vector>
#include <map>

#include "node/node.hpp"

namespace sf{
	class Clock;
}

// main class.
// class needed for starting the functions, manage DELTA, and store system objects.
class GlobalManager {
private: 

	static bool is_running;

	static sf::Clock* m_clock;
	static float delta;

	static int m_id_counter;
	static std::vector<UpdatingObject*> m_elements;
	
public:
	// call only from main.cpp

	// load and prepare to work function
	static void load();
	// starting the main programm loop
	static int start_mainloop();

	// registers a node instance in memory
	static int reg_node(UpdatingObject*);


	friend class Input;
};