#include <stdio.h>

// Program to print a diamond pattern using asterisks
int main(){
    // Set n to 5 - this determines the maximum width of the diamond
    int n=5;
    int i=1;
    
    // First loop: expands from 1 to n rows (top half of diamond)
    while(i<=n){
        // Inner loop 1: prints leading spaces to center the pattern
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        
        // Inner loop 2: prints asterisks - increases from 1 to 2*i-1
        j=1;
        while(j<=2*i-1){
            printf("*");
            j++;
        }
        
        // Move to next line
        printf("\n");
        i++;
    }
    
    // Second loop: contracts from n-1 to 1 rows (bottom half of diamond)
    i=n-1;
    while(i>=1){
        // Inner loop 1: prints leading spaces to center the pattern
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        
        // Inner loop 2: prints asterisks - decreases to match contraction
        j=1;
        while(j<=2*i-1){
            printf("*");
            j++;
        }
        
        // Move to next line
        printf("\n");
        i--;
    }
    
    // Exit program successfully
    return 0;
}