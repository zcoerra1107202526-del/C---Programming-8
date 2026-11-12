#include<stdio.h>
void main()
{
    int level;

    clrscr();

    printf("WATER TANK MONITORING SYSTEM\n");
    printf("----------------------------\n");

    printf("Enter water level (0-100): ");
    scanf("%d",&level);

    if(level >= 90 && level <= 100)
        printf("\nTank Full - Motor OFF");

    else if(level >= 50 && level < 90)
        printf("\nTank Level Normal");

    else if(level >= 0 && level < 50)
        printf("\nLow Water - Motor ON");

    else
        printf("\nInvalid Water Level!");

    getch();
}
