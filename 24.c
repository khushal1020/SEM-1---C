#include <stdio.h>

struct Student {
    char name[100];
    float marks[5];
    float cgpa;
};

int main() {
    struct Student s;
    float total = 0;

    // Read name with spaces
    fgets(s.name, sizeof(s.name), stdin);

    // Remove trailing newline if present
    int i = 0;
    while (s.name[i] != '\0') {
        if (s.name[i] == '\n') {
            s.name[i] = '\0';
            break;
        }
        i++;
    }

    // Read marks
    for (int j = 0; j < 5; j++) {
        scanf("%f", &s.marks[j]);
        total += s.marks[j];
    }

    // Calculate CGPA
    s.cgpa = (total / 500.0f) * 5.0f;

    // EXACT OUTPUT FORMAT
    printf("Transcript\n");
    printf("Name: %s\n", s.name);
    printf("CGPA: %.2f\n", s.cgpa);

    // Classification
    printf("Class: ");
    if (s.cgpa >= 4.5)
        printf("First Class\n");
    else if (s.cgpa >= 3.5)
        printf("Second Class\n");
    else if (s.cgpa >= 2.5)
        printf("Third Class\n");
    else
        printf("Fail\n");

    return 0;
}

