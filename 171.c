#include<stdio.h>
void main()
{
    int pin, choice;
    float balance = 5000, amount;

    clrscr();

    printf("===== ATM SIMULATOR =====");
    printf("\nEnter PIN: ");
    scanf("%d", &pin);

    if(pin == 1234)
    {
        do
        {
            printf("\n\n1. Check Balance");
            printf("\n2. Deposit Money");
            printf("\n3. Withdraw Money");
            printf("\n4. Exit");
            printf("\nEnter Choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("\nBalance: Rs. %.2f", balance);
                    break;

                case 2:
                    printf("\nEnter Amount: ");
                    scanf("%f", &amount);

                    if(amount > 0)
                    {
                        balance += amount;
                        printf("\nDeposit Successful!");
                    }
                    else
                        printf("\nInvalid Amount!");
                    break;

                case 3:
                    printf("\nEnter Amount: ");
                    scanf("%f", &amount);

                    if(amount > 0 && amount <= balance)
                    {
                        balance -= amount;
                        printf("\nWithdrawal Successful!");
                    }
                    else
                        printf("\nInsufficient Balance or Invalid Amount!");
                    break;

                case 4:
                    printf("\nThank You!");
                    break;

                default:
                    printf("\nInvalid Choice!");
            }

        }while(choice != 4);
    }
    else
        printf("\nIncorrect PIN!");

    getch();
}
