#include <stdio.h>
int main()
{
    int id[10], salary[10], n = 0;
    char name[10][30];
    int choice, i, search, found;

    do
    {
        printf("\n MINI EMPLOYEE MANAGEMENT \n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Employee Records!\n");
                }
                else
                {
                    printf("\n------------------------------------------\n");
                    printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
                    printf("------------------------------------------\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%-10d %-20s %-10d\n",
                               id[i], name[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID     : %d\n", id[i]);
                        printf("Name   : %s\n", name[i]);
                        printf("Salary : %d\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee Not Found!\n");
                break;

            case 4:
                printf("Enter Employee ID: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("Enter New Salary: ");
                        scanf("%d", &salary[i]);

                        printf("Salary Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee Not Found!\n");
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