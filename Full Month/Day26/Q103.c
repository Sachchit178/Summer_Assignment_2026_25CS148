#include <stdio.h>
int main()
{
    int choice;
    float balance = 30000.0, amount;

    printf("~ATM~\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = Rs. %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Updated Balance = Rs. %.2f", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Remaining Balance = Rs. %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}