#include<stdio.h>
void main()
{
    int level;

    clrscr();

    printf("WATER TANK MONITORING SYSTEM\n");
    printf("Enter water level percentage: ");
    scanf("%d",&level);

    if(level>=90 && level<=100)
        printf("\nTank Status: FULL");
    else if(level>=50 && level<90)
        printf("\nTank Status: MEDIUM");
    else if(level>=1 && level<50)
        printf("\nTank Status: LOW");
    else if(level==0)
        printf("\nTank Status: EMPTY");
    else
        printf("\nInvalid Water Level");

    getch();
}
