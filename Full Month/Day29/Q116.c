#include <stdio.h>

struct Book
{
    int id, qty;
    char name[50];
    float price;
};

int main()
{
    struct Book b[100];
    int n = 0, choice, i, searchId, found, amount;
    float total;

    do
    {
        printf("\n====== BOOK STORE INVENTORY ======\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Sell Book\n");
        printf("5. Restock Book\n");
        printf("6. Update Price\n");
        printf("7. Total Inventory Value\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Enter Price: ");
                scanf("%f", &b[n].price);

                printf("Enter Quantity: ");
                scanf("%d", &b[n].qty);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\n===============================================================\n");
                    printf("%-8s %-25s %-10s %-10s\n",
                           "ID", "Book Name", "Price", "Quantity");
                    printf("===============================================================\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%-8d %-25s %-10.2f %-10d\n",
                               b[i].id,
                               b[i].name,
                               b[i].price,
                               b[i].qty);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID   : %d\n", b[i].id);
                        printf("Book Name : %s\n", b[i].name);
                        printf("Price     : %.2f\n", b[i].price);
                        printf("Quantity  : %d\n", b[i].qty);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("Enter Quantity to Sell: ");
                        scanf("%d", &amount);

                        if(amount <= b[i].qty)
                        {
                            b[i].qty -= amount;
                            printf("Book Sold Successfully!\n");
                        }
                        else
                        {
                            printf("Insufficient Stock!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("Enter Quantity to Add: ");
                        scanf("%d", &amount);

                        b[i].qty += amount;
                        printf("Stock Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 6:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == searchId)
                    {
                        printf("Enter New Price: ");
                        scanf("%f", &b[i].price);

                        printf("Price Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 7:
                total = 0;

                for(i = 0; i < n; i++)
                {
                    total += b[i].price * b[i].qty;
                }

                printf("Total Inventory Value = %.2f\n", total);
                break;

            case 8:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}