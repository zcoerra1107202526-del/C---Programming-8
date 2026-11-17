#include<stdio.h>
void main()
{
    int slots[5], i, occupied=0, vacant=0;

    clrscr();

    printf("SMART PARKING SYSTEM\n");

    for(i=0; i<5; i++)
    {
        printf("\nEnter status of slot %d (1=Occupied, 0=Vacant): ",i+1);
        scanf("%d",&slots[i]);

        if(slots[i]==1)
            occupied++;
        else
            vacant++;
    }

    printf("\nOccupied Slots: %d",occupied);
    printf("\nVacant Slots: %d",vacant);

    getch();
}
