#include <stdio.h>

int main() {
    long long int number, modifiedNumber = 0;
    int digit, place = 1;

    printf("Enter a number: ");
    scanf("%lld", &number);
    while (number != 0) {
        digit = number % 10; 
        number /= 10; 

        if (digit == 0) {
            digit = 1;
        } else if (digit == 1) {
            digit = 0;
        }

        modifiedNumber += digit * place;
        place *= 10;
    }

    printf("Modified number: %lld\n", modifiedNumber);

    return 0;
}
