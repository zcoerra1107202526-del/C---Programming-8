
#include<stdio.h>

void main()
{
    int seconds,hours,minutes,remaining;

    clrscr();

    printf("DIGITAL STOPWATCH\n");
    printf("Enter total seconds: ");
    scanf("%d",&seconds);

    if(seconds<0)
        printf("Invalid Time");
    else
    {
        hours=seconds/3600;
        remaining=seconds%3600;
        minutes=remaining/60;
        remaining=remaining%60;

        printf("\nTime: %02d:%02d:%02d",
               hours,minutes,remaining);
    }

    getch();
}
