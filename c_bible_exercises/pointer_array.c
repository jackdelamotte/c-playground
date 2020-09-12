/* section 5.8 */

#include <stdio.h>
#include<string.h>

char *month_name(int n)
{
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June", 
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

int main()
{
    int n;

    printf("Enter an integer between 1 and 12 inclusive.\n");
    scanf("%d", &n);

    if(strcmp(month_name(n), "Illegal month") == 0)
    {
        printf("Illegal month.\n");
    }
    else if(n == 1) 
    {
         printf("\n%s is the %dst month of the year", month_name(n), n);
    }
    else if(n == 2)
    {
        printf("\n%s is the %dnd month of the year", month_name(n), n);
    }
    else if (n == 3) 
    {
        printf("\n%s is the %drd month of the year", month_name(n), n);
    }
    else
    {
        printf("\n%s is the %dth month of the year", month_name(n), n);
    }

    return 0;
}
