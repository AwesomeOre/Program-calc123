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

    if (a + x < 0 || b != 0) {
        F = cos(x) / (a * log(x));
    } else if (a + x > 0 && b == 0) {
        F = c / (x + a);
    } else {
        F = sin(x) / (b * (a + (x * x) / exp(c)));
    }

    printf("F = %.4f\n", F);
    return 0;
}
