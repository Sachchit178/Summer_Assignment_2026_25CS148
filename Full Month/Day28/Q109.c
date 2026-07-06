#include <stdio.h>
#include <string.h>
int main()
{
    char book[10][30], search[30];
    int n = 0, i, choice;

    do
    {
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Enter Book Name: ");
                gets(book[n]);
                n++;
                break;

            case 2:
                printf("\nBooks:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d. %s\n", i + 1, book[i]);
                }
                break;

            case 3:
                printf("Enter Book Name: ");
                gets(search);

                for(i = 0; i < n; i++)
                {
                    if(strcmp(book[i], search) == 0)
                    {
                        printf("Book Found\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found\n");

                break;

            case 4:
                printf("Enter Book Number to Issue: ");
                scanf("%d", &i);

                if(i >= 1 && i <= n)
                    printf("%s Issued Successfully\n", book[i - 1]);
                else
                    printf("Invalid Book Number\n");

                break;

            case 5:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 5);

    return 0;
}