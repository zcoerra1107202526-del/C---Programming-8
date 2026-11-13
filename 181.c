#include<stdio.h>
void main()
{
    int units;
    float bill;

    clrscr();

    printf("SMART ELECTRICITY BILL");
    printf("\nEnter units consumed: ");
    scanf("%d",&units);

    if(units<=100)
        bill=units*2.50;
    else if(units<=200)
        bill=250+(units-100)*4.00;
    else
        bill=650+(units-200)*6.00;

    printf("\nTotal Electricity Bill = Rs. %.2f",bill);

    getch();
}
