#include <stdio.h>
int main(){
 int a, num;
 unsigned long long fact = 1;
 printf("Enter the Positive integer: ");
 scanf("%d", &num); 
 while(num < 0) {
     printf("Factorial is not defined for negative numbers.\n");
     printf("Enter a positive integer: ");
     scanf("%d", &num);
 }
 for(a = 1; a <= num; ++a) {
     fact *= a;
 }
     printf("Factorial of %d = %llu\n", num, fact);
 return 0;
}