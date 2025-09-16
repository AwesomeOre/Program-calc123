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

    if (x + a < 0 && c == 0) {
        F = c / b;
    } else if (x + a > 0 && c != 0) {
        F = (a * x) / (c * sin(x));
    } else {
        F = (10 * x) / (c + 6);
    }

    printf("F = %.4f\n", F);
    return 0;
}
