/*The prototypical Internet newbie is a fellow named B1FF, who has a unique way
of wirting messages. Here's a typical B1FF communique:

H3Y DUD3, C 15 R1LLY COOL!!!!!!!!!!

Write a "B1FF filter" that reads a message entered by the user and translates it
into B1FF speak:

Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C is R1lly COOL!!!!!!!!

Your program should convert the message to upper-case letter, substitute digits
for certin letters (A->4, B->8, E -> 3, I-> 1, O->0, S->5), and then append 10 
or so exclamation marks. Hint: Store the originial message in a array of 
characters, then go back through the array, translating and printing characters
one by one.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char msg[30];

    printf("Enter message: ");
    for(int i = 0; i < 30; i++)
    {
        scanf("%c", &msg[i]);

        msg[i] = toupper(msg[i]);

        if (msg[i] == '\n')
            break;
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < 35; i++)
    {
        if (msg[i] == 'A')
            msg[i] = '4';
        else if (msg[i] == 'B')
            msg[i] = '8';
        else if (msg[i] == 'E')
            msg[i] = '3';
        else if (msg[i] == 'I')
            msg[i] = '1';
        else if (msg[i] == 'O')
            msg[i] = '0';
        else if (msg[i] == 'S')
            msg[i] = '5';
        else if (i >= 25)
            msg[i] = '!';

       printf("%c", msg[i]);
    }

    printf("\n");

    return 0;
}