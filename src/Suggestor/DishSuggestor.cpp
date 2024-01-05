//
// Created by Andrey on 2024-01-05.
//
// Dish Ideas:
//     the main functional element of this code. allows for limits on dishes on the following:
//         - nutritional value, based on total value in ingredients
//             - ingredients can be banned, so as to help with allergies, sensitivities, and dislikes. substitions are provided where possible
//             - values tracked include calories, grams of protein, fat, sugar, carbohydrates, major nutrients, and the like
//         - budget: food is ranked on cost efficiency from $ to $$$$$, based on the particular gram value.
//           for example, caviar ranks at $$$$$, for $USD35/gram, whereas pasta is cheap - a rating of $, for a cost of $USD.003/gram. Of course, these are RELATIVE costs,
//           and are determined more-or-less case-by-case.
//         - Complexity is calculated as a product of preparation time, ingredient counts, and number of steps.
//             - how exactly this is to be done is to be determined, but for the time being, it is thus:
//                 1. Each half-hour of preparation time adds a point
//                 2. Every 3 steps add a point
//                 3. Every ingredient adds its point value, based on a value inside the ingredient class (meat is much more complex than salt, for instance), and this is divided by
//                 the number of ingredients
//                 4. Every instance of letting something rest or rise adds a point
//             - The total number of points yields the difficulty from 1 to 5, based thus:
//                 1. <= 5
//                 2.  5 <= 10
//                 3. 10 <= 15
//                 4. 15 <= 20
//                 5.  21 <=
//         - cultural dishes, selected as a delimeter and featuring in the recipe class
// Dish Ideas II:
//     write out what ingredients one has, selecting from a list of named ingredient or grid featuring pictures of the same, in order to find all possible recipes that can be made
//     from it. This is in fact a feature in the above, but must be activated optionally. It will not be a hard lock, but rather write  out how many recipes are possible based on
//     the currently selected, and allow them to be cooked, with unavailable ingredients being highlighted in red.