#include <stdio.h>

int main()
{
    int id[10], qty[10], n = 0;
    char book[10][30];
    int choice, i, search;

    do
    {
        printf("\n----- MINI LIBRARY -----\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book[n]);

                printf("Enter Copies: ");
                scanf("%d", &qty[n]);

                n++;
                break;

            case 2:
                printf("\nID\tBook Name\tCopies\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%d\n", id[i], book[i], qty[i]);
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        if(qty[i] > 0)
                        {
                            qty[i]--;
                            printf("Book Issued!\n");
                        }
                        else
                        {
                            printf("Book Not Available!\n");
                        }
                    }
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}