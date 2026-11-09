#include<stdio.h>
void main()
{
    int slots, occupied, i;
    float hours, charge;

    clrscr();

    printf("===== SMART PARKING SYSTEM =====\n");

    printf("\nEnter total parking slots: ");
    scanf("%d",&slots);

    printf("Enter occupied slots: ");
    scanf("%d",&occupied);

    if(slots <= 0 || occupied < 0 || occupied > slots)
    {
        printf("\nInvalid Parking Data!");
    }
    else
    {
        printf("\nAvailable Slots: %d",slots-occupied);

        printf("\n\nEnter parking hours: ");
        scanf("%f",&hours);

        if(hours <= 0)
            printf("\nInvalid Parking Hours!");
        else
        {
            if(hours <= 2)
                charge = 20;
            else
                charge = 20 + (hours-2)*10;

            printf("\nParking Charge: Rs. %.2f",charge);

            printf("\n\nParking Slot Status:\n");

            for(i=1; i<=slots; i++)
            {
                if(i<=occupied)
                    printf("Slot %d : Occupied\n",i);
                else
                    printf("Slot %d : Available\n",i);
            }
        }
    }

    getch();
}
