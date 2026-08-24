# include <stdio.h>
int main() {
    int num1;
    int num2;
  printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("You entered: %d\n", num1);
    printf("Enter the second number: ");
   
    scanf("%d", &num2);
    printf("You entered: %d\n", num2);
    printf("Please select the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. percentage\n");
    
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Result: %.2f%%\n", ((float)num2 / num1) * 100);
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
    }
    return 0;
}