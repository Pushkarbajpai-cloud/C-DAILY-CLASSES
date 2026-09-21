#include <stdio.h>
int main() {
    int num, i;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d", &num);
    printf("Enter the elements:");
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
      }
      printf("Frequency of the slected numbers:\n");
      for(i = 0; i < num; i++) {
        int count = 1;
        if(arr[i] != -1) {
            for(int j = i + 1; j < num; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // count kar liya 
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }







    }
    return 0;
}   