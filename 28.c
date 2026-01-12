#include <stdio.h>
void compute(float r, float *area, float *circumference) {
    *area = 3.14f * r * r;
    *circumference = 2 * 3.14f * r;
}

int main() {
    float r, area, circumference;

    // Input
    scanf("%f", &r);

    // Function call
    compute(r, &area, &circumference);

    // Output with 2 decimal places
    printf("%.2f\n", area);
    printf("%.2f\n", circumference);

    return 0;
}
