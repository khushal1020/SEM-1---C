#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float numbers[100], sum = 0, mean, variance = 0, deviation;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter values : ");
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        variance += pow(numbers[i] - mean, 2);
    }

    variance = variance / n;
    deviation = sqrt(variance);

    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", variance);
    printf("Deviation = %.2f\n", deviation);

    return 0;
}

