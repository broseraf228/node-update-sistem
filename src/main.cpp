#include "global_manager/GlobalManager.hpp"
#include "node/node.hpp"

#include "global_manager/events.hpp"

#include <iostream>

//TODO: 
// 1 - complete phisicsObject and visualObject
// do not forgot, they nasleduyustya by positioned_stats
// 2 - complete vec2 // > < >= <= == != normalised() lenght() proection(vec2)
// 3 - complete positioned stats
// 10 - canvas::sort

int main(int argc, char** argv)
{
    GlobalManager::load();

    //lobalManager::reg_node(new Aboba());
    
    int exit_code = GlobalManager::start_mainloop();
    return exit_code;
}