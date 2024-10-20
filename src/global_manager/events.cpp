#include "events.hpp"
#include "../GlobalManager.hpp"


int* Input::keys = new int[300] {0};
float* Input::keys_time = new float[300] {0.0};
bool Input::is_close = false;

void Input::handle_events(float delta) {
    sf::RenderWindow* window = Window::self()->window;
    sf::Event event;


    for(int i = 0; i < 300; i++)
        if (keys[i] > 0) {
            keys[i] += 1;
            keys_time[i] += delta;
        }


    while (window->pollEvent(event))
    {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed) {
            is_close = true;
            continue;
        }
        if (event.type == sf::Event::KeyPressed) {
            keys[event.key.code] += 1;
            keys_time[event.key.code] += delta;
        }
        if (event.type == sf::Event::KeyReleased) {
            keys[event.key.code] = 0;
            keys_time[event.key.code] = 0;
        }
    }
}

bool Input::key_is_pressed(sf::Keyboard::Key key) {
    return keys[key];
}
bool Input::key_just_pressed(sf::Keyboard::Key key) {
    if (keys[key] == 1)
        return true;
    return false;
}
float Input::key_time_pressed(sf::Keyboard::Key key) {
    return keys_time[key];
}