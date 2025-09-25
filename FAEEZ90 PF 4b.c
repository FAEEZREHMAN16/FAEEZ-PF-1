#include <stdio.h>

int main() {
    float cost, discount = 0, savedAmount, finalAmount;

    printf("Enter the cost of shopping: ");
    scanf("%f", &cost);

    if (cost >= 2000 && cost <= 4000) {
        discount = 0.20 ;   
    }
    else if (cost >= 4001 && cost <= 6000) {
        discount = 0.30 ;   
    }
    else if (cost > 6000) {
        discount = 0.50 ;  
    }
    else {
        discount = 0;
    }

    savedAmount = cost * discount;
    finalAmount = cost - savedAmount;

    printf("\nActual Amount: %.2f", cost);
    printf("\nSaved Amount : %.2f", savedAmount);
    printf("\nAmount After Disc.: %.2f\n", finalAmount);

    return 0;
}

