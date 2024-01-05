// Ingredient:
//   Variables:
//     Name - String
//     Nutritional Value: dictionary featuring each of:
//       Calories
//       Saturated Fat
//       Trans Fat 
//       Cholestorol
//       Sodium
//       Carbohydrate
//       Fiber
//       Sugar
//       Protein
//       Iron
//       Vitamin A 
//       Vitamin B
//       Vitamin C
//       Vitamin D
//       Vitamin K
//         Respectively, as the string value: quantity
//     Culture - String, possibly empty, for country of origin, or most notable use. 
//     Cost Efficiency - price per gram, effective as of the time of writing
//     Flavour profile - Dictionary featuring a strength scale from 1 to 10 of each of the main flavours:
//       sweet
//       salty
//       sour  
//       bitter 
//       umami  
//       spicy (as a measure of heat, for scoville units or intensity of a herb)
//     Allergen: boolean, whether or not it is an allergen from the 7 major groups: milk, eggs, fish, Crustacean shellfish, tree nuts, peanuts, wheat (gluten), and soybeans
//     Individual Complexity - integer from 1 to 5, essentially classing ingredients: finishing/decor (chives), basic flavour (salt, pepper), minor ingredient (butter), 
//     major ingredient (potatos), chief ingredient (steak), based on cost and typical importance in the dish (THIS MAY BE AMENDED LATER TO REFLECT INGREDIENT IMPORTANCE IN EACH DISH)
//   Methods:
//     Get Nutritional Percentage: returns percentage values for a given age group
//     Get Nutritional Value: returns nutritional value dictionary
//     Get Allergen: return isAllergen
//     Get CostEfficiency: returns cost efficiency
//     Get Intensity: returns the flavour intensity based on the flavour profile

#include "Ingredient.h"
#include "Recipe.h"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <unordered_map>
// Constructor
Ingredient::Ingredient(const std::string& name, const std::unordered_map<std::string, double>& nutritionalValue,
                       const std::string& culture, double costEfficiency,
                       const std::unordered_map<std::string, int>& flavourProfile, bool isAllergen, int complexity)
        : name(name), nutritionalValue(nutritionalValue), culture(culture),
          costEfficiency(costEfficiency), flavourProfile(flavourProfile), isAllergen(isAllergen), complexity(complexity) {
    // You can add additional initialization logic if needed
}

// Methods

std::unordered_map<std::string, double> Ingredient::getNutritionalPercentage(int ageGroup) const {
    // Return percentage values for a given age group
    // This method should be implemented based on your specific requirements
    // You may need to define and implement additional classes and methods for this functionality
    // Example:
    // std::unordered_map<std::string, double> percentageValues;
    // percentageValues["Calories"] = calculatePercentage(nutritionalValue["Calories"], ageGroup);
    // ...
    // return percentageValues;
}

std::unordered_map<std::string, double> Ingredient::getNutritionalValue() const {
    return nutritionalValue;
}

bool Ingredient::getAllergen() const {
    return isAllergen;
}

std::string Ingredient::getName() const {
    return name;
}

double Ingredient::getCostEfficiency() const {
    return costEfficiency;
}

int Ingredient::getIntensity(const std::string& flavor) const {
    // Return the flavor intensity based on the flavour profile
    auto it = flavourProfile.find(flavor);
    if (it != flavourProfile.end()) {
        return it->second;
    }
    return 0; // Flavor not found
}
