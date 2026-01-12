#include <stdio.h>

int main() {
    int n, sum = 0, temp;

    scanf("%d", &n);

    // Check if number is 5-digit
    if (n >= 10000 && n <= 99999) {
        temp = n;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        printf("%d", sum);
    } 
    else {
        printf("Invalid input");
    }

    return 0;
}

