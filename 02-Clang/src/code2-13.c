# include<stdio.h>

int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}

int main() {
    int x =2, y = 3;

    int (*functionPtr)(int, int) = add;
    printf("%d + %d = %d\n", x,y,(*functionPtr)(x, y));

    functionPtr = multiply;
    printf("%d + %d = %d\n", x,y,(*functionPtr)(x, y));
    return 0;
}