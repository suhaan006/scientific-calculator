#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        double num1, num2, result = 0;
        int n, factorial = 1;

        printf("\nSmart Calculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Factorial\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:  
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:  
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:  
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:  
                printf("Enter two integers: ");
                scanf("%lf %lf", &num1, &num2);
                if ((int)num2 != 0) {
                    result = (int)num1 % (int)num2;
                    printf("Result: %.0lf\n", result);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;

            case 6:  
                printf("Enter the base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 7:  
                printf("Enter an integer: ");
                scanf("%d", &n);
                factorial = 1;
                for (int i = 1; i <= n; i++) {
                    factorial *= i;
                }
                printf("Result: %d\n", factorial);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
    }

    printf("Thank you for using the smart calculator. Goodbye!\n");

    return 0;
}
