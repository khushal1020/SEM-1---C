#include <stdio.h>

enum dtype { INT, FLOAT };

union number {
    int i;
    float f;
};

struct Data {
    enum dtype type;
    union number value;
};

int main() {
    struct Data d1, d2;

    // Read integer
    scanf("%d", &d1.value.i);
    d1.type = INT;

    // Clear input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Read float
    scanf("%f", &d2.value.f);
    d2.type = FLOAT;

    // Print first variable
    if (d1.type == INT)
        printf("%d\n", d1.value.i);
    else
        printf("%f\n", d1.value.f);

    // Print second variable
    if (d2.type == INT)
        printf("%d\n", d2.value.i);
    else
        printf("%.1f\n", d2.value.f);

    return 0;
}

