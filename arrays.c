#include <stdio.h>
int main() {
    int arry[5], sum=0,avg=0;
    for(int i=0; i<5; i++){
        printf("Enter the value of %d element: ", i+1);
        scanf("%d", &arry[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ", arry[i]);
    }
    for(int j=0; j<5;j++){
        sum+=arry[j];
        printf("\nThe sum of the array is: %d", sum);


    }
    avg=sum/5;
    printf("\nThe average of the array is: %d", avg);
    return 0;

}