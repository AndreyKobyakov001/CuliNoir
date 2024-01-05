//
// Created by Andrey on 2024-01-05.
//

#ifndef CULINOIR_INGREDIENT_H
#define CULINOIR_INGREDIENT_H
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <unordered_map>

class Ingredient {
public:
    // Constructor
    Ingredient(const std::string& name, const std::unordered_map<std::string, double>& nutritionalValue,
               const std::string& culture, double costEfficiency,
               const std::unordered_map<std::string, int>& flavourProfile, bool isAllergen, int complexity);

    // Methods
    std::unordered_map<std::string, double> getNutritionalPercentage(int ageGroup) const;
    std::unordered_map<std::string, double> getNutritionalValue() const;
    bool getAllergen() const;
    double getCostEfficiency() const;
    int getIntensity(const std::string& flavor) const;
    std::string getName() const;

private:
    std::string name;
    std::unordered_map<std::string, double> nutritionalValue;
    std::string culture;
    double costEfficiency;
    std::unordered_map<std::string, int> flavourProfile;
    bool isAllergen;
    int complexity;

};


#endif //CULINOIR_INGREDIENT_H
