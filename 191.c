#include<stdio.h>
struct Vehicle
{
    int number;
    int slot;
};

void main()
{
    struct Vehicle v[5];
    int i, count = 0;

    clrscr();

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter vehicle number: ");
        scanf("%d", &v[i].number);

        v[i].slot = i + 1;
        count++;
    }

    printf("\n--- PARKING DETAILS ---");

    for(i = 0; i < 5; i++)
    {
        printf("\nVehicle: %d", v[i].number);
        printf(" | Slot: %d", v[i].slot);
    }

    printf("\nTotal parked vehicles: %d", count);

    getch();
}
