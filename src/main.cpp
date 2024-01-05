/*
main functionality:
ask user what they want:
1. food tinder
2. menu planner
3. dish ideas (with limiters)

// */
// #include <stdio.h>
#include <iostream>
#include "Planner/MenuPlanner.h"
#include "Suggestor/DishSuggestor.h"
#include "Tinder/FoodTinder.h"
#include "Helper/Recipe.h"
#include "Helper/RecipeReader.h"
#include "Helper/Ingredient.h"

int main() {
    std::string filePath = "RecipeDatabase.csv";
    std::vector<Recipe> recipes = RecipeReader::readRecipesFromCSV(filePath);

    // Print the read recipes (for testing purposes)
    for (const Recipe& recipe : recipes) {
        recipe.getRecipe();
    }
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
            break;
        }
        case 2: {
            MenuPlanner menuPlanner;
            break;
        }
        case 3: {
            DishSuggestor dishSuggestor;
            break;
        }
        default:
            std::cout << "Invalid choice. Exiting..." << std::endl;
            break;
    }

    return 0;
}
