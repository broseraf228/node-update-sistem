#include "GlobalManager.hpp"
#include <SFML/Graphics.hpp>

#include "graphics/window.hpp"
#include "graphics/events.hpp"

//--------------------------------------
//					GlobalManager
//--------------------------------------

bool GlobalManager::is_running = false;
float GlobalManager::delta = 0;
sf::Clock* GlobalManager::m_clock = new sf::Clock();
int GlobalManager::m_id_counter = 0;
std::vector<UpdatingObject*> GlobalManager::m_elements = {};

void GlobalManager::load() {
	is_running = true;
}
int GlobalManager::start_mainloop() {

	sf::RenderWindow* window = Window::self()->window;

	while (is_running)
	{
		delta = m_clock->restart().asSeconds();

		Input::handle_events(delta);
		if (Input::is_close)
			is_running = false;

		// update loop
		for (int i = 0; i < m_elements.size(); i++) {
			m_elements[i]->_update(delta);
		}

		// delete loop
		for (int i = 0; i < m_elements.size(); i++) {
			if (!m_elements[i]->is_exist) {
				delete m_elements[i];
				m_elements.erase(m_elements.begin() + i);
				continue;
			}
		}
	}

	return 0;
}

int GlobalManager::reg_node(UpdatingObject* element) {
	element->is_exist = true;
	element->id = ++m_id_counter;
	m_elements.push_back(element);
	return m_id_counter;
}