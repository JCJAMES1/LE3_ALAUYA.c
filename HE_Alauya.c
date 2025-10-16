#include <stdio.h>
int main(){
    float balance = 500;
    float amount = 0;
    int choice;
    
    while (1) {
    
    printf("\nJC BANK\n");
    printf("Please Select your Transaction\n");
    printf("[1] Balance Inquiry\n");
    printf("[2] Deposit\n");
    printf("[3] Withdraw\n");
    printf("[4] Exit\n");
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 4) {
            printf("\nThank you for banking with us!\n");
            break;
    }       
            
    switch (choice) {
        case 1:
        printf("Your current balance: P%.2f\n", balance);
        break;
        
        case 2:
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        
        if(amount > 0){
            balance += amount;
            printf("P%.2f deposited successfully!\n", amount);
        } else {
            printf("Invalid amount.\n");
        }
        break;
        
        case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount > 0) {
            if (amount <= balance - 100) {
                balance -= amount;
                printf("You withdrew P%.2f successfully!\n", amount);
            } else {
                printf("Withdrawal denied! You must maintain at least P100.00.\n");
            }
        } else {
            printf("Invalid amount.\n");
        }
        break;
         
                
                case 4:
                printf("\nThank you for banking with us!");
                break;
                
                default:
                printf("\nInvalid choice. Please try again.\n");
            }
        } while (choice != 4);
        
        return 0;
    
        
}