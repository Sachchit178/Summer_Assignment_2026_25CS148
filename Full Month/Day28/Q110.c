#include <stdio.h>
int main()
{
    int choice;
    char name[30];
    int accNo;
    float balance = 0, amount;

    do
    {
        printf("\n BANK ACCOUNT SYSTEM \n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Holder Name: ");
                scanf("%s", name);

                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                printf("Enter Initial Balance: ");
                scanf("%f", &balance);

                printf("Account Created Successfully!\n");
                break;

            case 2:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);

                balance = balance + amount;

                printf("Money Deposited Successfully!\n");
                break;

            case 3:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance = balance - amount;
                    printf("Money Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("\nAccount Holder: %s\n", name);
                printf("Account Number: %d\n", accNo);
                printf("Current Balance: %.2f\n", balance);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}