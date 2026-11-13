#include<stdio.h>
void main()
{
    int balance=10000, amount;

    clrscr();

    printf("===== ATM MACHINE =====");
    printf("\nAvailable Balance: Rs. %d",balance);

    printf("\nEnter withdrawal amount: ");
    scanf("%d",&amount);

    if(amount<=0)
        printf("\nInvalid Amount!");
    else if(amount>balance)
        printf("\nInsufficient Balance!");
    else if(amount%100!=0)
        printf("\nEnter amount in multiples of 100!");
    else
    {
        balance=balance-amount;

        printf("\nTransaction Successful!");
        printf("\nRemaining Balance: Rs. %d",balance);
    }

    getch();
}
