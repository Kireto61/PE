//
// Created by Kiril Valkov on 18.11.24.
//
#pragma once
#include "cars_manager.h"
void cars_manager::run()
{
    std::string command;
    do
    {
        help();
        std::cin >> command;
        if (command == "new")
        {
            std::cin >> command;
            std::string x;
            std::getline(std::cin, x);
            if (command == "airport")
            {
                input_airport();
            }
            else if (command == "plane")
            {
                input_plane();
            }
            else if (command == "flight")
            {
                input_flight();
            }
        }
        else if (command == "search_for_plane")
        {
            search_for_plane();
        }
    } while (command != "end");
}

void cars_manager::help()
{
    std::cout <<
              R"(Valid commands:
new airport<Enter>      - to add new airport
new plane<Enter>        - to add new plane
new flight<Enter>       - to add new flight
search_for_plane<Enter> - to find planes able to do a given flight
)";
}