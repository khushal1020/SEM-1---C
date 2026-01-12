#include <stdio.h>

int main() {
    int n, i, num;
    int sumPos = 0, sumNeg = 0;

    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0)
            sumPos += num;
        else if (num < 0)
            sumNeg += num;
    }

    printf("%d\n", sumPos);
    printf("%d\n", sumNeg);

    return 0;
}

