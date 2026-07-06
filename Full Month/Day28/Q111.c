#include <stdio.h>
int main()
{
    int choice;
    char name[30];
    int age;
    int tickets = 0;
    float fare = 500;

    do
    {
        printf("\n TICKET BOOKING SYSTEM ");
        printf("\n1. Book Ticket");
        printf("\n2. View Booking");
        printf("\n3. Cancel Ticket");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Passenger Name: ");
                scanf("%s", name);

                printf("Enter Age: ");
                scanf("%d", &age);

                printf("Enter Number of Tickets: ");
                scanf("%d", &tickets);

                printf("\nBooking Successful!\n");
                printf("Total Amount = Rs. %.2f\n", tickets * fare);
                break;

            case 2:
                if(tickets == 0)
                {
                    printf("No Booking Found!\n");
                }
                else
                {
                    printf("\nPassenger Name : %s", name);
                    printf("\nAge            : %d", age);
                    printf("\nTickets Booked : %d", tickets);
                    printf("\nTotal Amount   : Rs. %.2f\n", tickets * fare);
                }
                break;

            case 3:
                if(tickets == 0)
                {
                    printf("No Ticket to Cancel!\n");
                }
                else
                {
                    tickets = 0;
                    printf("Ticket Cancelled Successfully!\n");
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