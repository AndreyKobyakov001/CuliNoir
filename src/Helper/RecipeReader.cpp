#include "RecipeReader.h"

std::vector<Recipe> RecipeReader::readRecipesFromCSV(const std::string& filePath) {
    std::vector<Recipe> recipes;
    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file: " << filePath << std::endl;
        return recipes;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::vector<std::string> row;

        // Split the CSV line into tokens
        std::string token;
        while (std::getline(iss, token, ',')) {
            row.push_back(token);
        }

        if (row.empty()) {
            continue; // Skip empty lines
        }

        std::string title = row[0];
        std::vector<Ingredient> ingredients; // You'll need to implement Ingredient parsing
        std::vector<std::string> method;
        std::string culture = row[3];
        std::vector<std::string> winePairing; // You'll need to implement parsing for wine pairing
        std::vector<std::string> cheesePairing; // You'll need to implement parsing for cheese pairing
        std::string dishClass = row[6];

        // Create a Recipe object and add it to the vector
        Recipe recipe(title, ingredients, method, culture, winePairing, cheesePairing, dishClass);
        recipes.push_back(recipe);
    }

    file.close();
    return recipes;
}
