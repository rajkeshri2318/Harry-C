#include <stdio.h>

int main() {
    int principal;
    int rate;
    int year;
    int simpleInterest;

    printf("give the value of principal");
    scanf("%d", &principal);

    printf("give the value of rate");
    scanf("%d", &rate);

    printf("give the value of year");
    scanf("%d", &year);

    simpleInterest = (principal * rate * year)/100;

    printf("simpleInterest is : %d", simpleInterest);

    return 0;
}