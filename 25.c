#include <stdio.h>
union test {
    int x;
    int y;
};

int main() {
    union test t;

    // Input x
    printf("x: ");
    scanf("%d", &t.x);

    // Display after setting x
    printf("After making x = %d:\n", t.x);
    printf("x= %d y= %d\n", t.x, t.y);

    // Input y
    printf("y: ");
    scanf("%d", &t.y);

    // Display after setting y
    printf("After making y = %d:\n", t.y);
    printf("x= %d y= %d\n", t.x, t.y);

    return 0;
}
