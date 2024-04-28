/*
Write a program to create a structure named "Movie" with data member movie_name, genre and released_year. Create a function to take input of 10 movies and print those movies which are released in 2020 in different function
*/

#include <stdio.h>
#include <stdlib.h>

// declaration of the structure
struct Movie
{
    char movie_name[20];
    char genre[20];
    int released_year;
};

// function declaration for movies entries and checking released year
void movies_entries(struct Movie m[], int no_of_movies);
void movie_released_2020(struct Movie m[], int no_of_movies);

int main()
{
    struct Movie m[10];

    movies_entries(m, 2);
    movie_released_2020(m, 2);

    return 0;
}

// function definitions

void movies_entries(struct Movie m[], int no_of_movies)
{
    for (int i = 0; i < no_of_movies; i++)
    {
        printf("Enter the movies name: ");
        scanf("%s", m[i].movie_name);
        printf("Enter the genre of movie : ");
        scanf("%s", m[i].genre);
        printf("Enter the released year: ");
        scanf("%d", &m[i].released_year);
        printf("\n");
    }
}
void movie_released_2020(struct Movie m[], int no_of_movies)
{
    printf("Movie released in 2020  \n");
    printf("Name\t\tGenre\tyear");
    for (int i = 0; i < no_of_movies; i++)
    {
        if (m[i].released_year == 2020)
        {
            printf("\n%s\t%s\t%d\n\n", m[i].movie_name, m[i].genre, m[i].released_year);
        }
    }
}