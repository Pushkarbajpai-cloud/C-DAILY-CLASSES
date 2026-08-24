# include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 101; i < 200; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    printf("Sum of all integers between 100 and 200 that are divisible by 5: %d\n", sum);
    return 0;
}
