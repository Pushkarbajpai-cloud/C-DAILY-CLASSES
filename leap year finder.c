#include <stdio.h>

int main() {
        int X,Y;

    printf("Enter the year:");
    scanf("%d",&X);
    if(X % 4 ==0){
        if(X % 100 ==0){
            if(X % 400 ==0) {
                printf("LEAP YEAR ");
             }
            else {
                printf("NOT LEAP YEAR ");
            }
        }
        else {
            printf("LEAP YEAR ");
        }
    }
    else {
        printf("NOT LEAP YEAR ");
    }
    return 0;
}