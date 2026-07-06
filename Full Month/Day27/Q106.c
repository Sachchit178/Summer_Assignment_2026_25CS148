#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;
    int choice;

    do
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &e.id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", e.name);

                printf("Enter Salary: ");
                scanf("%f", &e.salary);

                printf("\nEmployee Record Added Successfully!\n");
                break;

            case 2:
                printf("\n===== Employee Record =====\n");
                printf("Employee ID   : %d\n", e.id);
                printf("Employee Name : %s\n", e.name);
                printf("Salary        : %.2f\n", e.salary);
                break;

            case 3:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } 
    while(choice != 3);
    return 0;
}