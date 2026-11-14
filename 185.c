#include<stdio.h>
void checkBattery(int battery)
{
    if(battery>=80)
        printf("\nBattery Status: Fully Charged");
    else if(battery>=50)
        printf("\nBattery Status: Good");
    else if(battery>=20)
        printf("\nBattery Status: Low");
    else
        printf("\nBattery Status: Critical");
}

void main()
{
    int battery;

    clrscr();

    printf("Enter Robot Battery Level: ");
    scanf("%d",&battery);

    if(battery<0 || battery>100)
        printf("\nInvalid Battery Level");
    else
        checkBattery(battery);

    getch();
}
