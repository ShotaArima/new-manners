# include<stdio.h>

int input_number() {
    int x;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &x);
        if (x < 0 ) {
            printf("Please enter a positive integer.\n");
            continue;
        }
        break;
    } while (1);
    return x;
}

double calculate_square_root(double x) {
    double r1, r2;
    double rnew = x;
    double diff = rnew - x/rnew;

    while (diff > 1.0E-5) {
        r1 = rnew;
        r2 = x / r1;
        rnew = (r1 + r2) / 2;
        diff = r1 > r2 ? r1-r2 : r2-r1;
    }
    return rnew;
}

int main(){
    int x = input_number();;
    double sq = calculate_square_root((double) x);
    printf("Square root if %d is %7.5f\n", x, sq);
    return 0;
}