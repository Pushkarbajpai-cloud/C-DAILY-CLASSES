#include <stdio.h>

int main(void) {
    int a;
    int even = 0, odd = 0;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    while (a < 0) {
        printf("Not defined for negative numbers.\n");
        printf("Enter a positive integer: ");
        scanf("%d", &a);
    }

    for (i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
            even++;
        } else {
            printf("%d is odd\n", i);
            odd++;
        }
    }

    printf("Number of even and odd numbers are: %d,%d\n", even, odd);
    return 0;
}