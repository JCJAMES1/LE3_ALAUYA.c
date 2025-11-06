#include <stdio.h>

int main() {
    FILE *file;                   
    char name[100];                 
    char section[50];               

    printf("Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Section: ");
    fgets(section, sizeof(section), stdin);

   
    file = fopen("students.txt", "w");   
    if (file == NULL) {                 
        printf("Error opening file.\n");
        return 1;                        
    }

    fprintf(file, "Complete Name: %s", name);  
    fprintf(file, "Section: %s", section);     
    fclose(file);                             
    printf("\nInformation successfully saved to students.txt\n\n");

   
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    char line[150];
    while (fgets(line, sizeof(line), file)) {  
        printf("%s", line);                   
    }

    fclose(file);  
    return 0;
}