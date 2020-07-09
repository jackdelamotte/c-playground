/* Exercise 1-10 */

/* Write a program to copy its input to its output, replacing each tab
   by \t, each backspace by \b, and each backslash by \\. This makes tabs
   and backspaces visible in an unambiguous way. */

/* NOTE: use control-D as EOF in terminal */

#include <stdio.h>

int main() 
{

    int c;

    c = getchar();
    while(c != EOF) {
        
        if(c == 9) { /* if character is a horizontal tab */

            putchar(92); /* print backslash */
            putchar(116); /* print t */

        }
        else if(c == 8) { /* if character is a backspace */

            putchar(92); /* print backslash */
            putchar(98); /* print b */
        }

        else if(c == 92) { /* if character is a backslash */

            putchar(92); /* print backslash */
            putchar(92); /* print backslash */

        } else {

            putchar(c);

        }

        c = getchar();

    }

    return 0;
}
