/*
Write a program that simulates the game of craps, which is palyed with two dice.
On the first roll, the player wins if the sum is 7 or 11. The player loses if the
sum is 2,3, or 12. Any other roll is called the "point" and the games continues.
On each subsequent roll, the player wins if he or she rolls the point again. The player
loses by rolling 7. Any other roll is ignored and the game continues. At the end
of each game, the program will ask the user whether or not to play again. When the
user enters a response other than y or Y, the program will display the number of
wins and loses and then terminate.

You rolled : 8
Your point is 8
You rolled: 3
You rolled: 10
You rolled: 8
You win!

Play again? y

You rolled: 6
Your point is 6
You rolled: 5
You rolled: 12
You rolled: 3
You rolled: 7
You lose!

Play again? y
You rolled: 11
You win!

Play again? n
Wins : 2    Losses: 1

Write your program as three functions: main, roll_dice, and play_game. Here are the
prototypes for the latter two functions:

int roll_dice(void);
bool play_game(void);

roll_dice should generate two random numbers, each between 1 and 6, and return their
sum, play_game should play one craps game (call roll_dice to  determine the outcome
of each dice roll); it will return true if the player wins and false if the player
loses. play_game is also responsible for displaying messages showing the result of
the player's dice rolls.  main will call play_game repeatdly, keeping track of the
number of winds and losses and displaying the "you win" and "you lose" messages.
Hint: Use the rand function to generate random numbers. See deal.c program in Section 8.2
for an example of how to call rand and the related srand function.
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    printf("Welcome to the game of Craps!!!\n");
    printf("Type n or N to quit.\n");

    srand((unsigned) time(NULL));   // To prvent same dice number, put in main()

    play_game();

    return 0;
}

int roll_dice(void)
{
    int gen1, gen2, sum;

    gen1 = rand() % 6 + 1; // rand() % Max + 1 -> [rand() ~ Max]
    gen2 = rand() % 6 + 1; // rand() % Max + 1 -> [rand() ~ Max]

    sum = gen1 + gen2;

    return sum;
}

bool play_game(void)
{
    int first_roll = 0;     int win = 0, loss = 0, halt = 0;
    char answer = 'y';      int point = 0;          bool flag = true;

    while(answer != 'n' || answer != 'N')
    {
        first_roll = roll_dice();

        printf("You rolled: %d\n", first_roll);

        if (first_roll == 7 || first_roll == 11)
        {
            printf("YOU WIN\n");
            win++;
            goto question;

            return true;
        }
        else if (first_roll == 2 || first_roll == 3 || first_roll == 12)
        {
            printf("YOU LOSS\n");
            loss++;
            goto question;

            return true;
        }
        else
        {
            printf("Your point is: %d\n", first_roll);
            halt++;
        }

        point = roll_dice();

        if (halt > 0)
        {
            //flag = true;
            
            while(flag)
            {
                printf("You Rolled: %d\n", point);

                if (point == 7)
                {
                    printf("YOU LOSS\n");
                    loss++;
                    goto question;
                }
                else if (point == first_roll)
                {
                    printf("YOU WIN\n");
                    win++;
                    goto question;
                }
                else
                    point = roll_dice();
            }            

        }

//******************************************************************************
        question:
        printf("Play again? ");
        scanf("%c", &answer);
        getchar();

        if (answer == 'n' || answer == 'N')
        {
            printf("wins: %d\t\tloss: %d\n", win, loss);
            return false;        
        }

    }

    return true;
}