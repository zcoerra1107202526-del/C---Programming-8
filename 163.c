#include<stdio.h>
void main()
{
    int i,n;

    clrscr();

    printf("DIWALI DIYA LIGHTING\n");
    printf("--------------------\n");

    printf("Enter number of diyas: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%d.  ( * )  Diya is glowing!\n",i);
        else
            printf("%d.  \\ | /  Diya is glowing!\n",i);
    }

    printf("\nTotal Diyas Lighted: %d",n);
    printf("\nHappy Diwali!");

    getch();
}
