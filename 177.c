#include<stdio.h>
void main()
{
    int slots, parked, available;

    clrscr();

    printf("SMART PARKING SYSTEM\n");
    printf("--------------------\n");

    printf("Enter total parking slots: ");
    scanf("%d",&slots);

    printf("Enter occupied slots: ");
    scanf("%d",&parked);

    available = slots - parked;

    printf("\nTotal Slots: %d",slots);
    printf("\nOccupied Slots: %d",parked);
    printf("\nAvailable Slots: %d",available);

    if(available > 0)
        printf("\nParking Available!");
    else
        printf("\nParking Full!");

    getch();
}
