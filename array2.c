// this will make the program to take input from user and print the array elements
// then show whether the no inputed ia negative or positive 

/*#include <stdio.h>
int main(){
    int arr[5],P,N;

    for(int i=0;i<5;i++){
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    P = 0;
    N = 0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            P++;
        }
        else if(arr[i]%2!=0){
            N++;
        }
    }
   
  printf("The number of Even numbers are: %d",P);
  printf("\nThe number of Odd numbers are: %d",N);        
 return 0;
} */
/*
#include <stdio.h>
int main(){
    int arr[5],Largest,Smallest;
    printf("Enter the value of 5 elements: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    Largest = arr[0];
    Smallest = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>Largest){
            Largest = arr[i];
        }
        else if(arr[i]<Smallest){
            Smallest = arr[i];
        }   
}
    printf("The largest number is: %d", Largest);
    printf("\nThe smallest number is: %d", Smallest);   
     return 0;
} 

*/

#include <stdio.h>
int main(){
    int arr[5],X,G,E,S;
    printf("Enter the value of 5 elements: ");
    scanf("%d",&arr[0]);
    printf("Enter the Number from which you want to compare:");
    scanf("%d",&X);
    G = arr[0];
    E = arr[0]; 
    S = arr[0];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>X){
            G = arr[i];
            printf("The number greater than %d is: %d",X,G);
        }
        else if(arr[i]<X){
            E = arr[i];
             printf("\nThe number smaller than %d is: %d",X,E);
        }
        else if(arr[i]==X){
            S = arr[i];
             printf("\nThe number equal to %d is: %d",X,S);
        }
    }
    
   
   
    return 0;
}   












