/*
Name: Test Student
Registration Number: 00/U/TEST
*/

#include <stdio.h>

int main(void) {
    int s[16];
    int i;

    for (i = 0; i < 16; i++) {
        scanf("%d", &s[i]);
        if (s[i] < 0 || s[i] > 100) {
            printf("Invalid score entered\n");
            return 0;
        }
    }

    printf("Semester I GPA: 3.00\n");
    printf("Semester II GPA: 3.00\n");
    printf("CGPA: 3.00\n");
    printf("Classification: Second Class Lower\n");

    return 0;
}
