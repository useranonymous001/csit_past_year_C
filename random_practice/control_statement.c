
// control statements
/*
SWITCH CASES
    it allows us to choose a statement among many alternative.
    it compares the statement/ expressions( char | int type only) with the constants( cases ) and executes the corresponding block of code.
*/

#include <stdio.h>
int main()
{
    int num;
    printf("choose number between 1 to 4");
    scanf("%d", &num);

    switch (num) // only char or int type exp are allowed
    {
    case 1:
        printf("You choosed 1");
        break;
    case 2:
        printf("You choosed 2");
        break;
    case 3:
        printf("You choosed 3");
        break;
    case 4:
        printf("You choosed 4");
        break;
    default:
        printf("greater than 4");
        break;
    }
    return 0;
}