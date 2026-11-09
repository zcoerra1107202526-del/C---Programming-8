#include<stdio.h>
void main()
{
    int consumer_id;
    char name[30];
    float units, bill;

    clrscr();

    printf("================================\n");
    printf("     SMART ELECTRICITY BILL\n");
    printf("================================\n");

    printf("\nEnter Consumer ID: ");
    scanf("%d",&consumer_id);

    printf("Enter Customer Name: ");
    scanf("%s",name);

    printf("Enter Units Consumed: ");
    scanf("%f",&units);

    if(units < 0)
    {
        printf("\nInvalid Units!");
    }
    else if(units <= 100)
    {
        bill = units * 3;
    }
    else if(units <= 200)
    {
        bill = 100 * 3 + (units-100) * 5;
    }
    else if(units <= 300)
    {
        bill = 100 * 3 + 100 * 5 + (units-200) * 7;
    }
    else
    {
        bill = 100 * 3 + 100 * 5 + 100 * 7
               + (units-300) * 10;
    }

    if(units >= 0)
    {
        printf("\n========== BILL DETAILS ==========");
        printf("\nConsumer ID: %d",consumer_id);
        printf("\nCustomer Name: %s",name);
        printf("\nUnits Consumed: %.2f",units);
        printf("\nTotal Electricity Bill: Rs. %.2f",bill);
        printf("\n==================================");
    }

    getch();
}
