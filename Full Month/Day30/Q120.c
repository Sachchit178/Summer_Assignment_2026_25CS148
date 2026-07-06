#include <stdio.h>
#include <string.h>

#define MAX 10

char name[MAX][30];
int n = 0;

float rent = 0;
float electricity = 0;
float water = 0;
float internet = 0;

void addRoommates();
void displayRoommates();
void updateRoommate();
void deleteRoommate();
void enterBills();
void calculateShare();

int main()
{
    int choice;

    do
    {
        printf("\n=====================================\n");
        printf("      ROOM RENT SPLITTER SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Roommates\n");
        printf("2. Display Roommates\n");
        printf("3. Update Roommate Name\n");
        printf("4. Delete Roommate\n");
        printf("5. Enter Monthly Bills\n");
        printf("6. Calculate Share\n");
        printf("7. Exit\n");

        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addRoommates();
                break;

            case 2:
                displayRoommates();
                break;

            case 3:
                updateRoommate();
                break;

            case 4:
                deleteRoommate();
                break;

            case 5:
                enterBills();
                break;

            case 6:
                calculateShare();
                break;

            case 7:
                printf("\nThank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=7);

    return 0;
}

void addRoommates()
{
    if(n==MAX)
    {
        printf("Roommate List Full!\n");
        return;
    }

    printf("Enter Roommate Name : ");
    scanf(" %[^\n]",name[n]);

    n++;

    printf("Roommate Added Successfully!\n");
}

void displayRoommates()
{
    int i;

    if(n==0)
    {
        printf("No Roommates Found!\n");
        return;
    }

    printf("\n----------- ROOMMATES -----------\n");

    for(i=0;i<n;i++)
    {
        printf("%d. %s\n",i+1,name[i]);
    }
}

void updateRoommate()
{
    int i;

    if(n==0)
    {
        printf("No Records!\n");
        return;
    }

    displayRoommates();

    printf("Enter Roommate Number : ");
    scanf("%d",&i);

    if(i<1 || i>n)
    {
        printf("Invalid Number!\n");
        return;
    }

    printf("Enter New Name : ");
    scanf(" %[^\n]",name[i-1]);

    printf("Updated Successfully!\n");
}

void deleteRoommate()
{
    int i,j;

    if(n==0)
    {
        printf("No Records!\n");
        return;
    }

    displayRoommates();

    printf("Enter Roommate Number : ");
    scanf("%d",&i);

    if(i<1 || i>n)
    {
        printf("Invalid Number!\n");
        return;
    }

    for(j=i-1;j<n-1;j++)
    {
        strcpy(name[j],name[j+1]);
    }

    n--;

    printf("Deleted Successfully!\n");
}

void enterBills()
{
    printf("Enter House Rent : ");
    scanf("%f",&rent);

    printf("Enter Electricity Bill : ");
    scanf("%f",&electricity);

    printf("Enter Water Bill : ");
    scanf("%f",&water);

    printf("Enter Internet Bill : ");
    scanf("%f",&internet);

    printf("Bills Saved Successfully!\n");
}

void calculateShare()
{
    int i;
    float total,share;

    if(n==0)
    {
        printf("Please Add Roommates First!\n");
        return;
    }

    total=rent+electricity+water+internet;
    share=total/n;

    printf("\n==============================================\n");
    printf("Monthly Rent        : %.2f\n",rent);
    printf("Electricity Bill    : %.2f\n",electricity);
    printf("Water Bill          : %.2f\n",water);
    printf("Internet Bill       : %.2f\n",internet);
    printf("----------------------------------------------\n");
    printf("Total Bill          : %.2f\n",total);
    printf("Each Person Pays    : %.2f\n",share);

    printf("\n----------- PAYMENT DETAILS -----------\n");

    for(i=0;i<n;i++)
    {
        printf("%-20s %.2f\n",name[i],share);
    }
}