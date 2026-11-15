
#include<stdio.h>

void main()
{
    int choice;
    float balance=5000,amount;

    clrscr();

    printf("===== ATM SIMULATOR =====");
    printf("\n1. Check Balance");
    printf("\n2. Withdraw Money");
    printf("\n3. Deposit Money");

    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nAvailable Balance: Rs. %.2f",balance);
            break;

        case 2:
            printf("\nEnter withdrawal amount: ");
            scanf("%f",&amount);

            if(amount>0 && amount<=balance)
            {
                balance=balance-amount;
                printf("\nWithdrawal Successful!");
                printf("\nRemaining Balance: Rs. %.2f",balance);
            }
            else
                printf("\nInvalid Amount or Insufficient Balance!");
            break;

        case 3:
            printf("\nEnter deposit amount: ");
            scanf("%f",&amount);

            if(amount>0)
            {
                balance=balance+amount;
                printf("\nDeposit Successful!");
                printf("\nUpdated Balance: Rs. %.2f",balance);
            }
            else
                printf("\nInvalid Amount!");
            break;

        default:
            printf("\nInvalid Choice!");
    }

    getch();
}
