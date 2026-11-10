#include<stdio.h>
void main()
{
    int answer[5] = {2, 1, 3, 2, 1};
    int user, score = 0, i;

    clrscr();

    printf("===== C PROGRAMMING QUIZ =====");

    for(i = 0; i < 5; i++)
    {
        switch(i)
        {
            case 0:
                printf("\n\n1. Which symbol ends a C statement?");
                printf("\n1. :  2. ;  3. ,");
                break;

            case 1:
                printf("\n\n2. Which function displays output?");
                printf("\n1. printf  2. scanf  3. main");
                break;

            case 2:
                printf("\n\n3. Which is an integer data type?");
                printf("\n1. float  2. char  3. int");
                break;

            case 3:
                printf("\n\n4. Which loop executes at least once?");
                printf("\n1. for  2. do-while  3. while");
                break;

            case 4:
                printf("\n\n5. Which header file is used for printf?");
                printf("\n1. stdio.h  2. math.h  3. string.h");
                break;
        }

        printf("\nYour Answer: ");
        scanf("%d", &user);

        if(user == answer[i])
        {
            printf("Correct Answer!");
            score++;
        }
        else
            printf("Wrong Answer!");
    }

    printf("\n\n===== QUIZ RESULT =====");
    printf("\nTotal Score: %d / 5", score);

    getch();
}
