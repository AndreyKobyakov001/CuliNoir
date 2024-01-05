/*
main functionality:
ask user what they want:
1. food tinder
2. menu planner
3. dish ideas (with limiters)

// */
// #include <stdio.h>
#include <iostream>
#include "FoodTinder.h"
#include "MenuPlanner.h"
#include "DishSuggestor.h"

int main() {
    int choice;
    std::cout << "Welcome to CuliNoir!" << std::endl;
    std::cout << "Choose an option:" << std::endl;
    std::cout << "1. Food Tinder" << std::endl;
    std::cout << "2. Menu Planner" << std::endl;
    std::cout << "3. Dish Suggestor" << std::endl;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            FoodTinder foodTinder;
            foodTinder.run();
            break;
        }
        case 2: {
            MenuPlanner menuPlanner;
            menuPlanner.run();
            break;
        }
        case 3: {
            DishSuggestor dishSuggestor;
            dishSuggestor.run();
            break;
        }
        default:
            std::cout << "Invalid choice. Exiting..." << std::endl;
            break;
    }

    return 0;
}
