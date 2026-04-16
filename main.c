/*
Name: Test Student1
Registration Number: 00/U/TEST
*/

#include <stdio.h>

int main(void) {
    int s1, s2, s3, s4, s5, s6, s7, s8;
    int s9, s10, s11, s12, s13, s14, s15, s16;

    int gp1, gp2, gp3, gp4, gp5, gp6, gp7, gp8;
    int gp9, gp10, gp11, gp12, gp13, gp14, gp15, gp16;

    int cu1 = 4, cu2 = 3, cu3 = 3, cu4 = 3, cu5 = 3, cu6 = 3, cu7 = 2, cu8 = 3;
    int cu9 = 4, cu10 = 3, cu11 = 3, cu12 = 3, cu13 = 3, cu14 = 3, cu15 = 3, cu16 = 3;

    int wp1, wp2, wp3, wp4, wp5, wp6, wp7, wp8;
    int wp9, wp10, wp11, wp12, wp13, wp14, wp15, wp16;

    int total_cu_sem1, total_cu_sem2;
    int total_wp_sem1, total_wp_sem2;
    float gpa1, gpa2, cgpa;
    char classif[30];

    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    scanf("%d", &s4);
    scanf("%d", &s5);
    scanf("%d", &s6);
    scanf("%d", &s7);
    scanf("%d", &s8);
    scanf("%d", &s9);
    scanf("%d", &s10);
    scanf("%d", &s11);
    scanf("%d", &s12);
    scanf("%d", &s13);
    scanf("%d", &s14);
    scanf("%d", &s15);
    scanf("%d", &s16);

    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 || s4 < 0 || s4 > 100 ||
        s5 < 0 || s5 > 100 || s6 < 0 || s6 > 100 || s7 < 0 || s7 > 100 || s8 < 0 || s8 > 100 ||
        s9 < 0 || s9 > 100 || s10 < 0 || s10 > 100 || s11 < 0 || s11 > 100 || s12 < 0 || s12 > 100 ||
        s13 < 0 || s13 > 100 || s14 < 0 || s14 > 100 || s15 < 0 || s15 > 100 || s16 < 0 || s16 > 100) {
        printf("Invalid score entered\n");
        return 0;
    }

    gp1 = (s1 >= 80) ? 5 : (s1 >= 70) ? 4 : (s1 >= 60) ? 3 : (s1 >= 50) ? 2 : 0;
    gp2 = (s2 >= 80) ? 5 : (s2 >= 70) ? 4 : (s2 >= 60) ? 3 : (s2 >= 50) ? 2 : 0;
    gp3 = (s3 >= 80) ? 5 : (s3 >= 70) ? 4 : (s3 >= 60) ? 3 : (s3 >= 50) ? 2 : 0;
    gp4 = (s4 >= 80) ? 5 : (s4 >= 70) ? 4 : (s4 >= 60) ? 3 : (s4 >= 50) ? 2 : 0;
    gp5 = (s5 >= 80) ? 5 : (s5 >= 70) ? 4 : (s5 >= 60) ? 3 : (s5 >= 50) ? 2 : 0;
    gp6 = (s6 >= 80) ? 5 : (s6 >= 70) ? 4 : (s6 >= 60) ? 3 : (s6 >= 50) ? 2 : 0;
    gp7 = (s7 >= 80) ? 5 : (s7 >= 70) ? 4 : (s7 >= 60) ? 3 : (s7 >= 50) ? 2 : 0;
    gp8 = (s8 >= 80) ? 5 : (s8 >= 70) ? 4 : (s8 >= 60) ? 3 : (s8 >= 50) ? 2 : 0;

    gp9 = (s9 >= 80) ? 5 : (s9 >= 70) ? 4 : (s9 >= 60) ? 3 : (s9 >= 50) ? 2 : 0;
    gp10 = (s10 >= 80) ? 5 : (s10 >= 70) ? 4 : (s10 >= 60) ? 3 : (s10 >= 50) ? 2 : 0;
    gp11 = (s11 >= 80) ? 5 : (s11 >= 70) ? 4 : (s11 >= 60) ? 3 : (s11 >= 50) ? 2 : 0;
    gp12 = (s12 >= 80) ? 5 : (s12 >= 70) ? 4 : (s12 >= 60) ? 3 : (s12 >= 50) ? 2 : 0;
    gp13 = (s13 >= 80) ? 5 : (s13 >= 70) ? 4 : (s13 >= 60) ? 3 : (s13 >= 50) ? 2 : 0;
    gp14 = (s14 >= 80) ? 5 : (s14 >= 70) ? 4 : (s14 >= 60) ? 3 : (s14 >= 50) ? 2 : 0;
    gp15 = (s15 >= 80) ? 5 : (s15 >= 70) ? 4 : (s15 >= 60) ? 3 : (s15 >= 50) ? 2 : 0;
    gp16 = (s16 >= 80) ? 5 : (s16 >= 70) ? 4 : (s16 >= 60) ? 3 : (s16 >= 50) ? 2 : 0;

    wp1 = gp1 * cu1;   wp2 = gp2 * cu2;   wp3 = gp3 * cu3;   wp4 = gp4 * cu4;
    wp5 = gp5 * cu5;   wp6 = gp6 * cu6;   wp7 = gp7 * cu7;   wp8 = gp8 * cu8;
    wp9 = gp9 * cu9;   wp10 = gp10 * cu10; wp11 = gp11 * cu11; wp12 = gp12 * cu12;
    wp13 = gp13 * cu13; wp14 = gp14 * cu14; wp15 = gp15 * cu15; wp16 = gp16 * cu16;

    total_cu_sem1 = cu1 + cu2 + cu3 + cu4 + cu5 + cu6 + cu7 + cu8;
    total_cu_sem2 = cu9 + cu10 + cu11 + cu12 + cu13 + cu14 + cu15 + cu16;

    total_wp_sem1 = wp1 + wp2 + wp3 + wp4 + wp5 + wp6 + wp7 + wp8;
    total_wp_sem2 = wp9 + wp10 + wp11 + wp12 + wp13 + wp14 + wp15 + wp16;

    gpa1 = (float) total_wp_sem1 / total_cu_sem1;
    gpa2 = (float) total_wp_sem2 / total_cu_sem2;
    cgpa = (float) (total_wp_sem1 + total_wp_sem2) / (total_cu_sem1 + total_cu_sem2);

    if (cgpa >= 4.40)
        snprintf(classif, sizeof(classif), "First Class");
    else if (cgpa >= 3.60)
        snprintf(classif, sizeof(classif), "Second Class Upper");
    else if (cgpa >= 2.80)
        snprintf(classif, sizeof(classif), "Second Class Lower");
    else if (cgpa >= 2.00)
        snprintf(classif, sizeof(classif), "Pass");
    else
        snprintf(classif, sizeof(classif), "Fail");

    printf("YEAR ONE ACADEMIC REPORT\n");
    printf("========================\n");

    printf("Semester I GPA: %.2f\n", gpa1);
    printf("Semester II GPA: %.2f\n", gpa2);
    printf("CGPA: %.2f\n", cgpa);
    printf("Classification: %s\n", classif);

    return 0;
}
