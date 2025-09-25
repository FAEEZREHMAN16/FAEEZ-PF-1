#include <stdio.h>

int main() {
    float calories, fatGrams, caloriesFromFat, percentage;
    
    printf("Enter total calories: ");
    scanf("%f", &calories);
    
    printf("Enter fat grams: ");
    scanf("%f", &fatGrams);

    if (calories < 0 || fatGrams < 0) {
        printf("Error: Calories and fat grams cannot be negative.\n");
        return 0;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > calories) {
        printf("Error: Calories from fat cannot be greater than total calories.\n");
        return 0;
    }

       percentage = (caloriesFromFat / calories) * 100;

    printf("Calories from fat: %.2f\n", caloriesFromFat);
    printf("Percentage of calories from fat: %.2f%%\n", percentage);

    if (percentage < 30) {
        printf("This food is low in fat.\n");
    }

    return 0;
}

