#include<stdio.h>
void main()
{
    int vehicles;

    clrscr();

    printf("SMART TRAFFIC SIGNAL SYSTEM\n");
    printf("---------------------------\n");

    printf("Enter number of vehicles: ");
    scanf("%d",&vehicles);

    if(vehicles <= 10 && vehicles >= 0)
    {
        printf("\nGREEN SIGNAL");
        printf("\nLow Traffic Density");
    }
    else if(vehicles <= 30 && vehicles > 10)
    {
        printf("\nYELLOW SIGNAL");
        printf("\nModerate Traffic Density");
    }
    else if(vehicles > 30)
    {
        printf("\nRED SIGNAL");
        printf("\nHigh Traffic Density");
    }
    else
    {
        printf("\nInvalid Vehicle Count");
    }

    getch();
}
