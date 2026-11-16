#include<stdio.h>
void trafficSignal(int signal)
{
    switch(signal)
    {
        case 1:
            printf("\nSignal: RED");
            printf("\nAction: STOP");
            break;

        case 2:
            printf("\nSignal: YELLOW");
            printf("\nAction: WAIT");
            break;

        case 3:
            printf("\nSignal: GREEN");
            printf("\nAction: GO");
            break;

        default:
            printf("\nInvalid Signal!");
    }
}

void main()
{
    int signal;

    clrscr();

    printf("SMART TRAFFIC SIGNAL SYSTEM");

    printf("\n\n1. Red Signal");
    printf("\n2. Yellow Signal");
    printf("\n3. Green Signal");

    printf("\n\nEnter signal number: ");
    scanf("%d", &signal);

    trafficSignal(signal);

    getch();
}
