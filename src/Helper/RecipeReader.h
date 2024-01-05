//
// Created by Andrey on 2024-01-05.
//

#ifndef CULINOIR_RECIPE_READER_H
#define CULINOIR_RECIPE_READER_H
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Recipe.h"

class RecipeReader {
public:
    static std::vector<Recipe> readRecipesFromCSV(const std::string& filePath);
};


#endif //CULINOIR_RECIPE_READER_H
