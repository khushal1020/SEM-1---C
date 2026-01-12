#include <stdio.h>
int main() {
    char str1[100], str2[100], concat[200];
    int i, j, len1 = 0, len2 = 0, equal = 1, found = -1;

    // Input
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string (substring): ");
    scanf("%s", str2);

    // Calculate lengths
    for (i = 0; str1[i] != '\0'; i++) len1++;
    for (i = 0; str2[i] != '\0'; i++) len2++;

    // Compare strings
    if (len1 != len2) equal = 0;
    else {
        for (i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                equal = 0;
                break;
            }
        }
    }

    if (equal)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Find longer string
    if (len1 > len2)
        printf("Longer string: %s\n", str1);
    else if (len2 > len1)
        printf("Longer string: %s\n", str2);
    else
        printf("Longer string: Both are of equal length\n");

    // Concatenate strings manually
    for (i = 0; i < len1; i++)
        concat[i] = str1[i];
    for (j = 0; j < len2; j++)
        concat[i + j] = str2[j];
    concat[i + j] = '\0';

    printf("Concatenated string: %s\n", concat);

    // Find occurrence of second string in first
    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Substring found at index: %d\n", found);
    else
        printf("Substring not found in the first string\n");

    return 0;
}
