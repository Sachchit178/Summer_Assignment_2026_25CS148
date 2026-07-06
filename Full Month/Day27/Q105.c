#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    int choice;

    printf(" Student Record Management System \n");

    do
    {
        printf("\n1. Add Student Record");
        printf("\n2. Display Student Record");
        printf("\n3. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s.roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s.name);

                printf("Enter Marks: ");
                scanf("%f", &s.marks);

                printf("\nRecord Added Successfully!\n");
                break;

            case 2:
                printf("\n===== Student Record =====\n");
                printf("Roll Number : %d\n", s.roll);
                printf("Name        : %s\n", s.name);
                printf("Marks       : %.2f\n", s.marks);

                if(s.marks >= 40)
                    printf("Result      : Pass\n");
                else
                    printf("Result      : Fail\n");
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