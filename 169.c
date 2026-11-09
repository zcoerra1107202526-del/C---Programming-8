#include<stdio.h>
#include<string.h>

void main()
{
    char books[5][30] = {
        "C Programming",
        "Robotics",
        "Artificial Intelligence",
        "Data Structures",
        "Electronics"
    };

    char search[30];
    int i, found=0;

    clrscr();

    printf("===== LIBRARY MANAGEMENT =====\n");

    printf("\nAvailable Books:\n");

    for(i=0; i<5; i++)
    {
        printf("%d. %s\n",i+1,books[i]);
    }

    printf("\nEnter book name to search: ");
    gets(search);

    for(i=0; i<5; i++)
    {
        if(strcmp(search,books[i])==0)
        {
            found=1;
            printf("\nBook Found!");
            printf("\nBook Name: %s",books[i]);
            break;
        }
    }

    if(found==0)
        printf("\nSorry! Book Not Available.");

    getch();
}
