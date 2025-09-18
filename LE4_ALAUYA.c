#include <stdio.h>

int main() {

char name[100];
char section[20];
double num1, num2, num3, num4;
int number = 4;


printf("Enter Complete Name: "); //ask for name
fgets(name, sizeof(name), stdin);

printf("Enter Section: "); // ask for section
fgets(section, sizeof(section), stdin);

printf("Enter 1st Quater Grade:");
scanf("%lf", &num1);

printf("Enter 2nd Quater Grade:");
scanf("%lf", &num2);

printf("Enter 3rd Quater Grade:");
scanf("%lf", &num3);

printf("Enter 4th Quater Grade:");
scanf("%lf", &num4);

// display results
float average = (num1 + num2 + num3 + num4) / number;

printf("\n---Results---\n");
printf("Student: %s", name);
printf("Section: %s", section);
printf("General Average: %.2lf", (num1 + num2 + num3 + num4) / number, average);

if (average >= 90 && average <= 100) {
    printf("\nOutstanding");
}
if (average >= 85 && average <= 89) {
    printf("\nVery Satisfactory");
}
if (average >= 80 && average <= 84) {
    printf("\nSatisfactory");
}
if (average >= 75 && average <= 79) {
    printf("\nFair");
}
if (average < 75) {
    printf("\nFail");
}

return 0;
}