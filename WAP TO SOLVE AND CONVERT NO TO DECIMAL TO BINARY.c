// in this program a Number will be given by the user which later will be converted to binary 
// making it to change the no in decimals too
#include <stdio.h>
int main (){
    int N1,i=0,j;
 int arr[32];
 float D;
 printf("Please Enter your Number:");
 scanf("%d",&N1);
    // chutiya user enters 0 ( bro thinks he is tuff )
if(N1 == 0){
    printf("The Binary of 0 is 0");
    return 0;
}
if (N1 < 0) {
    printf("The Binary of %d is -", N1);
        return 0;
}
// abb actual user ( dimag walla ) enters a valid number
while (N1 > 0) {
    arr[i] = N1 % 2;
    N1 = N1 / 2;    
    i++;

}   
  printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");

D = N1/2;
 printf("Decimal: %f", D);



    return 0;
}