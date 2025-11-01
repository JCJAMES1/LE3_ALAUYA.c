#include <stdio.h>
#include <string.h>  

int main() {
  
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int numbers[n]; 

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    int largest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
    }

    printf("\nThe largest element in the array is: %d\n", largest);

  
    char text[200];
    int vowels = 0;

    printf("\nEnter a string: ");
    getchar(); 
    fgets(text, sizeof(text), stdin); 

    
    for (int i = 0; i < strlen(text); i++) {
        char c = text[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
