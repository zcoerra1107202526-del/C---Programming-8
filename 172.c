#include<stdio.h>
void main()
{
    int age, distance, category;
    float fare;

    clrscr();

    printf("===== RAILWAY FARE SYSTEM =====");

    printf("\nEnter Passenger Age: ");
    scanf("%d", &age);

    printf("\nEnter Distance in KM: ");
    scanf("%d", &distance);

    printf("\n1. General");
    printf("\n2. AC");
    printf("\nSelect Class: ");
    scanf("%d", &category);

    if(distance <= 0 || age < 0)
    {
        printf("\nInvalid Input!");
    }
    else
    {
        if(category == 1)
            fare = distance * 1.20;

        else if(category == 2)
            fare = distance * 2.50;

        else
            fare = -1;

        if(fare < 0)
            printf("\nInvalid Class!");
        else
        {
            if(age < 5)
                fare = 0;

            printf("\nPassenger Age: %d", age);
            printf("\nDistance: %d KM", distance);
            printf("\nTicket Fare: Rs. %.2f", fare);
        }
    }

    getch();
}
