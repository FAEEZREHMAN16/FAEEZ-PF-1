#include <stdio.h>

int main() {
    long long int num, lastDigit, rest;
    
    printf("Enter a number: ");
    scanf("%lld", &num);

    long long int temp = num;  

    while (temp > 9 || temp < -9) {  
        lastDigit = temp % 10;          
        rest = temp / 10;               
        temp = rest - (2 * lastDigit);  
        printf("Step: %lld\n", temp);
    }

    if (temp == 0 || temp == 7 || temp == -7) {
        printf("%lld is divisible by 7.\n", num);
    } else {
        printf("%lld is NOT divisible by 7.\n", num);
    }

    return 0;
}

