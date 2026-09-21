#include <stdio.h>
int main() {
    int arr[2][2];
    printf("enter the values of the matrix");
    scanf("%d %d %d %d", &arr[0][0], &arr[0][1], &arr[1][0], &arr[1][1]);
    printf("matrix:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int arr2[2][2];
    printf("enter the values of the second matrix");
    scanf("%d %d %d %d", &arr2[0][0], &arr2[0][1], &arr2[1][0], &arr2[1][1]);
    printf("matrix 2:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    int A = arr[0][0] + arr2[0][0];
    int B = arr[0][1] + arr2[0][1];
    int C = arr[1][0] + arr2[1][0];
    int D = arr[1][1] + arr2[1][1];
    int result[2][2] = {{A, B}, {C, D}};
    int choice;
    printf("enter your choice: ");
    printf("press 1 for multiplication, 2 for addition, 3 for subtraction, 4 for division: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Multiplication\n");
            break;
        case 2:
            printf("result:\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Subtraction\n");
            break;
        case 4:
            printf("Division\n");
            break;
        default:
            break;
    }
    return 0;
}
