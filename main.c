/*
Name: Test Student
Registration Number: 00/U/TEST
*/

#include <stdio.h>

int grade_point(int score) {
    if (score >= 80) return 5;
    if (score >= 70) return 4;
    if (score >= 60) return 3;
    if (score >= 50) return 2;
    return 0;
}

int main(void) {
    int s[16];
    int cu[16] = {4, 3, 3, 3, 3, 3, 2, 3, 4, 3, 3, 3, 3, 3, 3, 3};
    int i;

    for (i = 0; i < 16; i++) {
        scanf("%d", &s[i]);
        if (s[i] < 0 || s[i] > 100) {
            printf("Invalid score entered\n");
            return 0;
        }
    }

    int sem1_weighted = 0, sem2_weighted = 0;
    int sem1_cu = 0, sem2_cu = 0;

    for (i = 0; i < 8; i++) {
        sem1_weighted += grade_point(s[i]) * cu[i];
        sem1_cu += cu[i];
    }

    for (i = 8; i < 16; i++) {
        sem2_weighted += grade_point(s[i]) * cu[i];
        sem2_cu += cu[i];
    }

    double gpa1 = (double) sem1_weighted / sem1_cu;
    double gpa2 = (double) sem2_weighted / sem2_cu;
    double cgpa = (double) (sem1_weighted + sem2_weighted) / (sem1_cu + sem2_cu);

    char *classification;
    if (cgpa >= 4.40)
        classification = "First Class";
    else if (cgpa >= 3.60)
        classification = "Second Class Upper";
    else if (cgpa >= 2.80)
        classification = "Second Class Lower";
    else if (cgpa >= 2.00)
        classification = "Pass";
    else
        classification = "Fail";

    printf("YEAR ONE ACADEMIC REPORT\n");
    printf("Semester I GPA: %.2f\n", gpa1);
    printf("Semester II GPA: %.2f\n", gpa2);
    printf("CGPA: %.2f\n", cgpa);
    printf("Classification: %s\n", classification);

    return 0;
}
