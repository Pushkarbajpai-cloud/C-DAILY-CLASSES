/*#include <stdio.h>

int main() {
    int n = 5;  
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n"); 
        i++;
    }
    return 0;
}*/





/*#include <stdio.h>

int main() {
    int n=6;
    int i=1;
while( i<=n ){
    int j=1;
       while (j <= n-i) {
        printf(" ");
        j++;
       }
       j=1;
    while ( j<=i){
        printf("*");
        j++;
    }
    printf(" \n"); 
        i++;
}
    return 0;
}*/

#include <stdio.h>

int main(){
    int n=5;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i-1){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    i=n-1;
    while(i>=1){
        int j=1;
        while(j<=n-i){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=2*i-1){
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}