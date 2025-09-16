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

    if (c < 0 && b != 0) {
        F = x / (a * c);
    } else if (c > 0 && b == 0) {
        F = x / b;
    } else {
        F = (a * x * x + b * b * x + c) / (sin(x) + a * c);
    }

    printf("F = %.4f\n", F);
    return 0;
}
