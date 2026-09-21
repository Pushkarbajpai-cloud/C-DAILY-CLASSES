#include <stdio.h>
#define size 5
int main(){
    int arr[size], i, num, found =0;
    printf("Enter %d elements in the array:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search in the array: ");
    scanf("%d", &num);
    for(i=0;i<size;i++){
       if(arr[i]==num)
         {
              found++;
         }
    }
    if(found>0)
    {
        printf("Number found %d times in the array.\n", found);
    }
    else
    {
        printf("Number not found in the array.\n");
    }       
         scanf("%d", &num);
            


return 0;
}
