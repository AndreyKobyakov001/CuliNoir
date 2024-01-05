//
// Created by Andrey on 2024-01-05.
//

#ifndef CULINOIR_RECIPE_H
#define CULINOIR_RECIPE_H
#include "Ingredient.h"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <unordered_map>

class Recipe {

public:
    // Constructor
    Recipe(const std::string& title, const std::vector<Ingredient>& ingredients,
           const std::vector<std::string>& method, const std::string& culture,
           const std::vector<std::string>& winePairing, const std::vector<std::string>& cheesePairing,
           const std::string& dishClass);

    // Methods
    void addRecipe(const std::string& title, const std::vector<Ingredient>& ingredients,
                   const std::vector<std::string>& method, const std::string& culture,
                   const std::vector<std::string>& winePairing, const std::vector<std::string>& cheesePairing,
                   const std::string& dishClass);

    void getRecipe() const;
    std::unordered_map<std::string, double> getNutritionalValues() const;
//    double getValueModified(double quantity) const; //Removed for now, as standardizing will prove difficult
    double getCost() const;
    int getComplexity() const;
    std::string getCulture() const;
    bool hasAllergen() const;
    void returnMenu() const;

private:
    std::string title;
    std::vector<Ingredient> ingredients;
    std::vector<std::string> method;
    std::string culture;
    std::vector<std::string> winePairing;
    std::vector<std::string> cheesePairing;
    std::string dishClass;
};



#endif //CULINOIR_RECIPE_H
