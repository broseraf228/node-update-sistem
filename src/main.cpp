#include "global_manager/GlobalManager.hpp"
#include "node/node.hpp"

#include "global_manager/events.hpp"

#include <iostream>

//TODO: 
// 2 - create mtrx_scale and mtrx_rotation
// 3 - complete vec2 > < >= <= == !=
// 4 - complete positioned_stats or think any better
// 5 - complete phisicsObject and visualObject
// do not forgot, they nasleduyustya by positioned_stats
// 6 - canvas::sort
// 7 - sleep

int main(int argc, char** argv)
{
    GlobalManager::load();

    //lobalManager::reg_node(new Aboba());
    
    int exit_code = GlobalManager::start_mainloop();
    return exit_code;
}