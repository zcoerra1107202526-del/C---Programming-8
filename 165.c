#include<stdio.h>
void main()
{
    int i,j;
    clrscr();

    printf("          *");
    printf("\n         ***");
    printf("\n        *****");

    for(i=1;i<=3;i++)
    {
        printf("\n       ");
        for(j=1;j<=7;j++)
        {
            printf("*");
        }
    }

    printf("\n        *****");
    printf("\n         ***");
    printf("\n\n    HAPPY DIWALI!");
    printf("\n    PARTH BAMGUDE");

    getch();
}
