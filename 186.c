#include<stdio.h>
void main()
{
    int total, occupied, i;

    clrscr();

    printf("Enter Total Parking Slots: ");
    scanf("%d",&total);

    printf("Enter Occupied Slots: ");
    scanf("%d",&occupied);

    if(total<0 || occupied<0 || occupied>total)
    {
        printf("\nInvalid Parking Data");
    }
    else
    {
        printf("\n--- PARKING STATUS ---");

        for(i=1;i<=total;i++)
        {
            if(i<=occupied)
                printf("\nSlot %d : Occupied",i);
            else
                printf("\nSlot %d : Available",i);
        }

        printf("\n\nAvailable Slots = %d",total-occupied);
    }

    getch();
}
