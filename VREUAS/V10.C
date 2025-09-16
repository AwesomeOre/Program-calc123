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

    if (x - 10 < 0 && a == 0) {
        F = cos(x + 1);
    } else if (x - 10 > 0 || a != 0) {
        F = (b / x) + (a * x * x + b * x + c);
    } else {
        F = sin(x) / (log(x + c) + 2 * b);
    }

    printf("F = %.4f\n", F);
    return 0;
}
