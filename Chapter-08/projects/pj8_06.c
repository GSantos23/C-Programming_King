/*The prototypical Internet newbie is a fellow named B1FF, who has a unique way
of writing messages. Here's a typical B1FF communique:

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
    char message[35] = {'!'};
    /* To detect where the string finish, and add !!! */
    int  sign = 0;

    printf("Enter message: ");
    for (int i = 0; i < 35; i++) {
        scanf("%c", &message[i]);
        message[i] = toupper(message[i]);

        if (message[i] == '\n') {
            sign = i;
            break;
        }

    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < 35; i++) {

        switch (message[i]) {
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
            default:
                message[i] = message[i];
                break;
        }

        if (i >= sign)
            message[i] = '!';

        printf("%c", message[i]);
    }

    printf("\n");
    return 0;
}
