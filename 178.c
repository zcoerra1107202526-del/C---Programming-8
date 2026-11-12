#include<stdio.h>
void main()
{
    int units;
    float bill;

    clrscr();

    printf("ELECTRICITY BILL ANALYZER\n");
    printf("------------------------\n");

    printf("Enter electricity units: ");
    scanf("%d",&units);

    if(units <= 100)
        bill = units * 3.50;
    else if(units <= 200)
        bill = 350 + (units-100)*5.00;
    else
        bill = 850 + (units-200)*7.00;

    printf("\nUnits Consumed: %d",units);
    printf("\nTotal Electricity Bill: Rs. %.2f",bill);

    getch();
}
