
#include<stdio.h>


void main()
{
    int attendance[7],i,count=0;

    clrscr();

    printf("WEEKLY ATTENDANCE ANALYZER\n");

    for(i=0;i<7;i++)
    {
        printf("Day %d (1=Present, 0=Absent): ",i+1);
        scanf("%d",&attendance[i]);

        if(attendance[i]==1)
            count++;
    }

    printf("\nPresent Days: %d",count);
    printf("\nAbsent Days: %d",7-count);

    printf("\nAttendance: %.2f%%",(count/7.0)*100);

    getch();
}
