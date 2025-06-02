#include<stdio.h>

int main() {
    int amount;
    const int price = 150;
    printf("How maany do you need?:");
    scanf("%d", &amount);
    printf("Total: %d yen \n", amount * price);
    return 0;
}