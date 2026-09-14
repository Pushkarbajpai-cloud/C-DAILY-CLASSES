# include <stdio.h>
int main() {
    int X, Y;
    float A;
    printf("Enter the base (X): ");
    scanf("%d", &X);
    printf("Enter the height (Y): ");
    scanf("%d", &Y);
    A=X/Y;

    printf( "%f", A);
    return 0;
}