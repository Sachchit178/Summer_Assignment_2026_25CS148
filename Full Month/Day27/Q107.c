#include <stdio.h>
int main()
{
    int choice;
    float basic, bonus, deduction, netSalary;

    do
    {
        printf("\nSalary Management System\n");
        printf("1. Calculate Salary\n");
        printf("2. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Basic Salary: ");
                scanf("%f", &basic);

                bonus = basic * 0.20;
                deduction = basic * 0.10;
                netSalary = basic + bonus + deduction;

                printf("\nBasic Salary : %.2f\n", basic);
                printf("BONUS          : %.2f\n", bonus);
                printf("DEDUCTION           : %.2f\n", deduction);
                printf("Net Salary   : %.2f\n", netSalary);
                break;

            case 2:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 2);

    return 0;
}