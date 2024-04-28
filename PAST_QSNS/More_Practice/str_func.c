
/*
How to pass array and structure to the function with and without pointer.
*/

#include <stdio.h>
#include <stdlib.h>

struct movie
{
    char movie_name[20];
    int released_year;
};

void pass_structure(struct movie m[]);
int main()
{
    struct movie m[2];

    pass_structure(m);
    return 0;
}

void pass_structure(struct movie m[])
{
    for (int i = 0; i < 2; i++)
    {

        printf("enter movie name: ");
        scanf("%s", m[i].movie_name);

        printf("enter released year: ");
        scanf("%d", &m[i].released_year);
    }
    printf("\n");
    printf("\n");

    for (int i = 0; i < 2; i++)
    {

        printf("%s ", m[i].movie_name);

        printf("%d", m[i].released_year);
        printf("\n");
    }
}
