#include<stdio.h>
void main()
{
    int stock[4] = {20, 15, 30, 10};
    int choice, quantity, i;

    clrscr();

    printf("WAREHOUSE INVENTORY");
    printf("\n1. Display Stock");
    printf("\n2. Add Stock");
    printf("\n3. Remove Stock");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("\nProduct Number (1-4): ");
    scanf("%d", &i);

    if(i < 1 || i > 4)
    {
        printf("Invalid product number!");
    }
    else
    {
        switch(choice)
        {
            case 1:
                printf("Available Stock: %d", stock[i-1]);
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if(quantity > 0)
                    stock[i-1] += quantity;

                printf("Updated Stock: %d", stock[i-1]);
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);

                if(quantity > 0 && quantity <= stock[i-1])
                    stock[i-1] -= quantity;
                else
                    printf("Invalid quantity!");

                printf("\nRemaining Stock: %d", stock[i-1]);
                break;

            default:
                printf("Invalid choice!");
        }
    }

    getch();
}
