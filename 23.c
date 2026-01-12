#include <stdio.h>
struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter 1st distance \n");
    printf("feet: ");
    scanf("%d", &d1.feet);
    printf("inch: ");
    scanf("%f", &d1.inch);

    printf("Enter 2nd distance \n");
    printf("feet: ");
    scanf("%d", &d2.feet);
    printf("inch: ");
    scanf("%f", &d2.inch);

    // Add
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Convert inches to feet
    if (sum.inch >= 12.0) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = sum.inch - ((int)(sum.inch / 12) * 12);
    }

    // EXACT expected output format
    printf("Sum of distances = %d'-%0.1f\"\n", sum.feet, sum.inch);

    return 0;
}
