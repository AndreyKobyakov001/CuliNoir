// Recipe:
//   Variables:
//     Title - String
//     Ingredients - Array of Ingredients
//     Method - Array of Strings
//     Culture - String
//     Wine Pairing - Array of Strings (possibly empty)
//     Cheese Pairing - Array of Strings (possibly empty)
//     Dish Class - string for style of dish based on the 3 - 17 course dinner
//   Methods:
//     Add Recipe: can add a recipe if the required variables are in there
//     Get Recipe: prints out the full recipe as appropriate
//     Get Nutritional Values: calculates total nutritional value based on cumulative sums of ingredients
//     Get Value Modified: returns nutritional value per set quantity (quantity to be determined; either one known serving or a standardized ~100 grams)
//     Get Cost: calculates cost efficiency based on value and quantity in ingredients
//     Get Complexity: as above, finds the difficulty
//     Get Culture: returns the culture of the dish
//     Has Allergen: returns whether or not the dish contains one of the 7 major allergens, and which, based on the ingredients
//     Return Menu: based on complementary flavour profiles, returns the previous and next class of dish (ie appetizer and dessert before and after main)


#include "Recipe.h"
#include "Ingredient.h"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <unordered_map>

// Constructor
Recipe::Recipe(const std::string& title, const std::vector<Ingredient>& ingredients,
               const std::vector<std::string>& method, const std::string& culture,
               const std::vector<std::string>& winePairing, const std::vector<std::string>& cheesePairing,
               const std::string& dishClass)
        : title(title), ingredients(ingredients), method(method), culture(culture),
          winePairing(winePairing), cheesePairing(cheesePairing), dishClass(dishClass) {
    // You can add additional initialization logic if needed
}

// Methods

void Recipe::addRecipe(const std::string& title, const std::vector<Ingredient>& ingredients,
                       const std::vector<std::string>& method, const std::string& culture,
                       const std::vector<std::string>& winePairing, const std::vector<std::string>& cheesePairing,
                       const std::string& dishClass) {
    // Add recipe logic
}

void Recipe::getRecipe() const {
    // Print out the full recipe
    std::cout << "Title: " << title << std::endl;
    std::cout << "Ingredients: ";
    for (const Ingredient& ingredient : ingredients) {
        std::cout << ingredient.getName() << ", ";
    }
    std::cout << std::endl << "Method: ";
    for (const std::string& step : method) {
        std::cout << step << ", ";
    }
    std::cout << std::endl;
}

std::unordered_map<std::string, double> Recipe::getNutritionalValues() const {
    std::unordered_map<std::string, double> totalNutrition;

    // Calculate total nutritional values based on cumulative sums of ingredients
    for (const Ingredient& ingredient : ingredients) {
        std::unordered_map<std::string, double> nutrition = ingredient.getNutritionalValue();
        for (const auto& entry : nutrition) {
            totalNutrition[entry.first] += entry.second;
        }
    }

    return totalNutrition;
}

//double Recipe::getValueModified(double quantity) const {
//    // Return nutritional value per set quantity
//    std::unordered_map<std::string, double> totalNutrition = getNutritionalValues();
//
//    // Modify values based on quantity
//    for (auto& entry : totalNutrition) {
//        entry.second *= quantity;
//    }
//
//    return totalNutrition;
//}

double Recipe::getCost() const {
    // Calculate cost efficiency based on value and quantity in ingredients
    double totalCost = 0.0;
    for (const Ingredient& ingredient : ingredients) {
        totalCost += ingredient.getCostEfficiency();
    }

    return totalCost;
}

int Recipe::getComplexity() const {
    // Calculate difficulty based on a given formula
    int n = ingredients.size(); // Number of ingredients
    return (n <= 3) ? 1 : (n <= 5) ? 2 : (n <= 9) ? 3 : (n <= 17) ? 4 : 5;
}

std::string Recipe::getCulture() const {
    return culture;
}

bool Recipe::hasAllergen() const {
    // Check whether the dish contains one of the 7 major allergens
    for (const Ingredient& ingredient : ingredients) {
        if (ingredient.getAllergen()) {
            return true;
        }
    }
    return false;
}

void Recipe::returnMenu() const {
    // Return complementary flavor profiles
    // This method should be implemented based on your specific requirements
    // It could return the previous and next class of dish (i.e., appetizer and dessert before and after the main)
    // You may need to define and implement additional classes and methods for this functionality
    // Example:
    // std::string previousDishClass = getPreviousDishClass();
    // std::string nextDishClass = getNextDishClass();
    // std::cout << "Previous Dish Class: " << previousDishClass << std::endl;
    // std::cout << "Next Dish Class: " << nextDishClass << std::endl;
}
