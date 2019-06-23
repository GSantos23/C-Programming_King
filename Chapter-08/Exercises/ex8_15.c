/*
One of the oldest know encryption techniques is the Caesar chiper, attributed to Julius
Caesar. It involves replacing each letter in a message with another letter that is
a fixed number of positions later in the alphabet. (If the replacement would go 
past the letter Z, the cipher "wraps around" to the begining of the alphabet.
For example, if each letter is replaced by the letter two positions after it, then
Y would be replaced by A, and Z would be replaced by B.) 

Write a program that encrypts a message using a Ceasar cipher. The user will enter
the message to be encrypted anf the shift amount (number of positions by which letters
should be shifted):

Enter a message to be encrypted: Go ahead, make my day.
Enter shift amount (1 - 25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.

Notice that the program can decrypt a message if the user enter 26 minus the original key:

Enter a message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1 - 25): 23
Encrypted message: Go ahead, make my day.

You may assume that the message does not exceed 80 characters. Characters other than
letters should be left unchanged. Lower-case remain lower-case when encrypted, and
upper-case letters remain upper-case. 

Hint: To handle the wrap-around problem, use the expression ((ch - 'A') + n) % 26 + 'A'
to calculate the encrypted version of an upper case letter, where ch stores the
letter and n stores the shift amount. (You'll need a similar expression for lower-case
letters.)
*/


#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 80

int main(void)
{
    int shiftAmount = 0; int count = 0;
    char initText = 0;  char cipher = 0;
    char message[MAX_LEN+1] = {0};  char newMessage[MAX_LEN+1] = {0};

    printf("Enter a message to be encrypted: ");
    initText = getchar();
    while(initText != '\n')
    {
        message[count] = initText;  
        count++;                        
        initText = getchar();
    }    

    printf("Enter shift amount (1 - 25): ");
    scanf("%d", &shiftAmount);

    printf("Encrypted message: ");

    int j = 0;

    // To handle uppercase ->  isupper()
    // To handle lowercase -> islower()
    // To handle nonletter -> Same as original array
    while(message[j] != '\0')
    {
        if (isupper(message[j]))
            cipher = ((message[j] - 'A' + shiftAmount)) % 26 + 'A';
        else if (islower(message[j]))
            cipher = ((message[j] - 'a' + shiftAmount)) % 26 + 'a';
        else
            cipher = message[j];

        newMessage[j] = cipher;

        printf("%c", newMessage[j]);
        j++;
    }


    printf("\n");

    return 0;
}
