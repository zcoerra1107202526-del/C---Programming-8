#include<stdio.h>
void main()
{
    int i,j;
    clrscr();

    printf("\n       DIWALI RANGOLI\n\n");

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==j || i+j==6 || i==3 || j==3)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n     HAPPY DIWALI!");

    getch();
}
