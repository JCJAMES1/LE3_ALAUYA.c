#include <stdio.h>

int main() {
    char name[100];
    char section[50];
    double num1, num2;

    printf("Enter your complete name: "); // Ask for student's complete name
    fgets(name, sizeof(name), stdin);

    printf("Enter your section: "); // Ask for student's section
    fgets(section, sizeof(section), stdin);

    printf("\nEnter first number: "); // Ask for two numbers
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Display results
    printf("\n---Student Calculator---\n");
    printf("Student Name: %s", name);
    printf("Section: %s", section);
    printf("Results: \n");
    printf("%.2lf\n", num1 + num2);
    printf("%.2lf\n", num1 - num2);
    printf("%.2lf\n", num1 * num2);

    if (num2 != 0)
        printf("%.2lf\n", num1 / num2);
    else
        printf("Cannot divide by zero.\n");

    return 0;
}
