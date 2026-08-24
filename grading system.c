#include <stdio.h>
int main() {
    int M = 0, P = 0, C = 0, E = 0, Cs = 0;
    printf("Enter marks of Maths, Physics, Chemistry, English and Computer Science: ");
    scanf("%d %d %d %d %d", &M, &P, &C, &E, &Cs);
    int total = M + P + C + E + Cs;
    int percentage  = (total * 100) / 500;
    printf("Total marks: %d\n", total);
    printf("Percentage: %d%%\n", percentage);
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D \n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}