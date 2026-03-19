#include <stdio.h>
#include <stdlib.h>
void printmove(int move)
{
    switch (move)
    {
    case 1:
        printf("rock");
        break;
    case 2:
        printf("paper");
        break;
    case 3:
        printf("scissor");
        break;
    }
}
int main()
{
    char again;
    int computer, user1, user2, op;
    do
    {

        printf("enter 1 for 1 player and 2 for 2 players\n");// giving options to user for how many players to play
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            computer = (rand() % 3) + 1;// as it is computer using rand function it will select any number from 1 to 3
            printf("enter 1 for rock\n  2 for paper\n 3 for scissor\n");
            scanf("%d", &user1);

            if (user1 < 1 || user1 > 3)// case so that everyone enter number between 1 to 3
            {
                printf("invalid input !");
            }

            else
            {
                printf(" user input is \n");
                printmove(user1);
                printf("\n");
                printf("computer input is \n");
                printmove(computer);
                printf("\n");
                // condition checking and giving output as per the game conditions
                if (computer == user1)
                {
                    printf(" It's an Draw\n");
                }
                else if ((computer == 3) && (user1 == 1) || (computer == 1) && (user1 == 2) || (computer == 2) && (user1 == 3))
                {
                    printf("you wins\n");
                }
                else
                {
                    printf("computer wins\n");
                }
                break;
            case 2:
                printf("enter 1 for rock\n  2 for paper\n 3 for scissor user1\n");
                scanf("%d", &user1);
                system("cls"); // use to clear the screen so that user 2 does not see yser 1 choice
                printf("enter 1 for rock\n  2 for paper\n 3 for scissor user2\n");
                scanf("%d", &user2);
                if (user1 < 1 || user1 > 3 || user2 < 1 || user2 > 3)
                    printf("invalid input\n");
                    // condition  checking and giving output as per the game conditions

                else
                {
                    printf(" user1 input is \n");
                    printmove(user1);
                    printf("\n");
                    printf("user2 input is \n");
                    printmove(user2);
                    printf("\n");

                    if (user2 == user1)
                    {
                        printf(" It's an Draw");
                    }
                    else if ((user2 == 3) && (user1 == 1) || (user2 == 1) && (user1 == 2) || (user2 == 2) && (user1 == 3))
                    {
                        printf("user1 wins\n");
                    }
                    else
                    {
                        printf("user2  wins\n");
                    }
                }
                break;

            default:
                printf(" Invalid Input Entered\n");// if user enter any other player number except 1 and 2
                break;
            }
        }
        printf("do u want to play agin ?(y/n)");
        scanf(" %c", &again);
        system("cls");
    }

    while (again == 'y' || again == 'Y');// using while loop for play again option
    printf("thanks for playing");
    return 0;
}
/*OUTPUT
enter 1 for 1 player and 2 for 2 players
1
enter 1 for rock
  2 for paper
 3 for scissor
2
 user input is 
paper
computer input is 
scissor
computer wins
do u want to play agin ?(y/n)N
thanks for playing
*/