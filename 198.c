#include<stdio.h>
void main()
{
    int battery;

    clrscr();

    printf("ROBOT BATTERY MONITOR\n");
    printf("Enter battery percentage: ");
    scanf("%d",&battery);

    if(battery>75 && battery<=100)
        printf("\nBattery Status: FULL");
    else if(battery>40 && battery<=75)
        printf("\nBattery Status: NORMAL");
    else if(battery>15 && battery<=40)
        printf("\nBattery Status: LOW");
    else if(battery>=0 && battery<=15)
        printf("\nBattery Status: CRITICAL");
    else
        printf("\nInvalid Battery Percentage");

    getch();
}
