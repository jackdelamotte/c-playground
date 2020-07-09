/* Exercise 1-9 */

/* "Write a program to copy its input to its output, 
    replacing each string of one or more blanks by a single blank." */

/* NOTE: Use control-D for EOF in terminal. */

#include <stdio.h>

int main() 
{
    int c;
    int prev_was_blank; /* an integer that will contain a 0 if the previously inputted character was a blank and a 1 otherwise. */

    prev_was_blank = 1;

    c = getchar();
    while(c != EOF) {

        if((prev_was_blank == 1) || (c != ' '))
            putchar(c);

        if(c == ' ')
            prev_was_blank = 0;
        else
            prev_was_blank = 1;

        c = getchar();

    }

    return 0;

}
