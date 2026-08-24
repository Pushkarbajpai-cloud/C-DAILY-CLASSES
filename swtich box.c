#include <stdio.h>

int main() {
    char StudentGrade;
    printf("Enter student grade: ");
    scanf(" %c", &StudentGrade);
    switch (StudentGrade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Poor");
            break;
        case 'F':
            printf("Fail Exam or Fail, Exam brother Exam failure follows my brother Failure follows \n");
            break;
        default:
            printf("Invalid grade");
    }
    return 0;
}