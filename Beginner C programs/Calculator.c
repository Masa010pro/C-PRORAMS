#include <stdio.h>
#include <math.h>

void showMenu() {
    printf("\n MASANSO'S CALCULATOR \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Square Root\n");
    printf("7. Sine (sin)\n");
    printf("8. Cosine (cos)\n");
    printf("9. Tangent (tan)\n");
    printf("10. Log base 10\n");
    printf("11. Natural Log (ln)\n");
    printf("0. Exit\n");
    printf("YOU SHOULD ONLY USE ABOVE OPERATIONS.\n");
}

int main() {
    int choice;
    double a, b, result;

    while (1) {
        showMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting calculator...\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a + b;
                printf("Result = %.4lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a - b;
                printf("Result = %.4lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = a * b;
                printf("Result = %.4lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    printf("Result = %.4lf\n", a / b);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.4lf\n", pow(a, b));
                break;

            case 6:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    printf("Result = %.4lf\n", sqrt(a));
                else
                    printf("Error: Negative input!\n");
                break;

            case 7:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                printf("Result = %.4lf\n", sin(a));
                break;

            case 8:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                printf("Result = %.4lf\n", cos(a));
                break;

            case 9:
                printf("Enter angle in radians: ");
                scanf("%lf", &a);
                printf("Result = %.4lf\n", tan(a));
                break;

            case 10:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result = %.4lf\n", log10(a));
                else
                    printf("Error: Invalid input!\n");
                break;

            case 11:
                printf("Enter number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result = %.4lf\n", log(a));
                else
                    printf("Error: Invalid input!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
