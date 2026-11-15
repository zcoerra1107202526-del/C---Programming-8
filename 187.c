
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int user, computer;

    clrscr();

    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d",&user);

    randomize();
    computer = random(3)+1;

    printf("\nComputer Choice: %d",computer);

    if(user<1 || user>3)
        printf("\nInvalid Choice");
    else if(user==computer)
        printf("\nMatch Draw!");
    else if((user==1 && computer==3) ||
            (user==2 && computer==1) ||
            (user==3 && computer==2))
        printf("\nYou Win!");
    else
        printf("\nComputer Wins!");

    getch();
}
