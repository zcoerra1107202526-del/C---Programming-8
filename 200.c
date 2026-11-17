#include<stdio.h>
void main()
{
    int a[5],i,sum=0,max,min;
    float avg;

    clrscr();

    printf("SENSOR DATA ANALYSIS\n");

    for(i=0;i<5;i++)
    {
        printf("Enter sensor reading %d: ",i+1);
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }

    max=min=a[0];

    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];
    }

    avg=sum/5.0;

    printf("\nAverage Reading: %.2f",avg);
    printf("\nMaximum Reading: %d",max);
    printf("\nMinimum Reading: %d",min);

    getch();
}
