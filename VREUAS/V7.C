#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x, F;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    printf("Enter x: ");
    scanf("%f", &x);

    if (x - 2 > 0 && a == 0) {
        F = (a * log(x)) / (b * b);
    } else if (x - 2 < 0 || a != 0) {
        F = sin(c) / (x * sin(x - 1));
    } else {
        F = (a * x + c) / (b + cos(2 * x));
    }

    printf("F = %.4f\n", F);
    return 0;
}
