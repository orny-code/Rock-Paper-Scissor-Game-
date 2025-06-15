#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int player,computer;  //= (rand() % 3) + 0;
    int player_score = 0, computer_score = 0;
    char exit_choice;


    /* 0 = Rock
       1 = Paper
       2 = Sessor
    */

   printf("Welcome to Rock, Paper, Scissors Game with Computer!\n");
    do {
        printf("\nChoose 0 for Rock, 1 for Paper, 2 for Scissors, or 3 to Exit: ");
        scanf("%d", &player);

        if (player == 3) {
            printf("Exiting the game...\n");
            break;
        }

        if (player < 0 || player > 2) {
            printf("Invalid choice. Please enter 0, 1, 2, or 3.\n");
            continue;
        }

        computer = rand() % 3;
        printf("Computer chose: %d\n", computer);

        if (player == computer) {
            printf("It's a draw.\n");
        } else if ((player == 0 && computer == 2) || (player == 1 && computer == 0) || (player == 2 && computer == 1)) {
            printf("You win this round!\n");
            player_score++;
        } else {
            printf("Computer wins this round!\n");
            computer_score++;
        }

        printf("\nCurrent Scores:\n");
        printf("You: %d\n", player_score);
        printf("Computer: %d\n", computer_score);

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &exit_choice);
    } while (exit_choice == 'y' || exit_choice == 'Y');

    printf("\nFinal Scores:\n");
    printf("You: %d\n", player_score);
    printf("Computer: %d\n", computer_score);

    if (player_score > computer_score) {
        printf("Congratulations! You win the game!\n");
    } else if (player_score < computer_score) {
        printf("Computer wins the game. Better luck next time!\n");
    } else {
        printf("It's a tie game!\n");
    }

  /*  printf("Choose 0 for Rock, 1 for Paper, 2 for Sessor : ");
    scanf("%d", &player);
    printf("Computer Chose %d",computer);

    printf("\n");

    if(player ==0 & computer==0)
    {
        printf("It's a draw.\n");
    }
    else if(player ==0 & computer==1)
    {
        printf("You Win!");
    }
    else if(player ==0 & computer==2)
    {
        printf("You Lose!");
    }
    else if(player ==1 & computer==0)
    {
        printf("You Win!");
    }
    else if(player ==1 & computer==1)
    {
        printf("It's a draw.\n");
    }
    else if(player ==1 & computer==2)
    {
        printf("You Lose!");
    }
    else if(player ==2 & computer==0)
    {
        printf("You Lose!");
    }
    else if(player ==2 & computer==1)
    {
        printf("You Win!");
    }
    else if(player ==2 & computer==2)
    {
        printf("It's a draw.\n");
    }
    else{
        printf("Something Wrong.");
    }
    */
    return 0;
}
