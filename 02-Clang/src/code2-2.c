// Newton method for square root
# include<stdio.h>

int main() {
    int x;
    double r1, r2, rnew;

    printf("Enter a postive integer:");
    scanf("%d", &x);
    rnew = x;

    r1 = rnew;
    r2 = x/r1;
    rnew = (r1 + r2) / 2;
    printf("%7.5f < %7.5f < %7.5f\n", r1, rnew, r2);

    r1 = rnew;
    r2 = x/r1;
    rnew = (r1 + r2) / 2;
    printf("%7.5f < %7.5f < %7.5f\n", r1, rnew, r2);

    r1 = rnew;
    r2 = x/r1;
    rnew = (r1 + r2) / 2;
    printf("%7.5f < %7.5f < %7.5f\n", r1, rnew, r2);

    return 0;
}