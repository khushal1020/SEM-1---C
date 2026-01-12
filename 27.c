#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int n;
    scanf("%d", &n);

    char arr[n][MAX];
    char *ptr[n];

    // Read strings
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        ptr[i] = arr[i];
    }

    // Sort using pointer array (by string length)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(ptr[j]) > strlen(ptr[j + 1])) {
                char *temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    // Print sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}

