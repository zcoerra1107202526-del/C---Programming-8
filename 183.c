#include<stdio.h>
void main()
{
    int hours;
    float fee;

    clrscr();

    printf("AUTOMATED PARKING SYSTEM");

    printf("\nEnter parking hours: ");
    scanf("%d",&hours);

    if(hours<=0)
        printf("\nInvalid Parking Time!");
    else if(hours<=2)
        fee=30;
    else if(hours<=5)
        fee=30+(hours-2)*20;
    else
        fee=90+(hours-5)*15;

    if(hours>0)
        printf("\nTotal Parking Fee = Rs. %.2f",fee);

    getch();
}
