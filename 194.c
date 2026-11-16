#include<stdio.h>
void checkWaterLevel(int level)
{
    printf("\nWater Level: %d%%", level);

    if(level >= 90)
    {
        printf("\nStatus: TANK FULL");
        printf("\nAlert: Stop Water Pump!");
    }
    else if(level >= 50)
    {
        printf("\nStatus: NORMAL");
        printf("\nPump Status: OFF");
    }
    else if(level >= 20)
    {
        printf("\nStatus: LOW WATER");
        printf("\nAlert: Start Water Pump!");
    }
    else if(level >= 0)
    {
        printf("\nStatus: CRITICAL");
        printf("\nAlert: Refill Tank Immediately!");
    }
    else
    {
        printf("\nInvalid Water Level!");
    }
}

void main()
{
    int level;

    clrscr();

    printf("SMART WATER TANK MONITORING");
    printf("\nEnter water level percentage: ");
    scanf("%d", &level);

    if(level <= 100)
        checkWaterLevel(level);
    else
        printf("\nInvalid Input!");

    getch();
}
