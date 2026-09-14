#include <stdio.h>
int main(){
    int num;
    int largest;
    int arr[100];
    printf("Enter the number of elements you want to check for the largest number: ");
    scanf("%d", &num);
    printf("Enter the elements: ");
    scanf("%d", &arr[0]);
    largest = arr[0];
    for(int i = 1; i < num; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > largest){
            largest = arr[i];
     
        }
    }
printf("the largest num is %d", largest);
    
    return 0;
}