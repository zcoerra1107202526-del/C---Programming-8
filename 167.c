#include<stdio.h>
void main()
{
    int choice;
    float balance = 5000, amount;

    clrscr();

    printf("===== ATM BANKING SYSTEM =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nAvailable Balance: Rs. %.2f",balance);
            break;

        case 2:
            printf("\nEnter deposit amount: ");
            scanf("%f",&amount);
            if(amount > 0)
            {
                balance = balance + amount;
                printf("Deposit Successful!");
                printf("\nNew Balance: Rs. %.2f",balance);
            }
            else
                printf("Invalid Amount");
            break;

        case 3:
            printf("\nEnter withdrawal amount: ");
            scanf("%f",&amount);
            if(amount > 0 && amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal Successful!");
                printf("\nRemaining Balance: Rs. %.2f",balance);
            }
            else
                printf("Invalid Amount or Insufficient Balance");
            break;

        case 4:
            printf("\nThank You!");
            break;

        default:
            printf("\nInvalid Choice!");
    }

    getch();
}
