/*
Description: Online Shopping Application
Author: Rohan Khatri
Features:
    1) sign-in / sign-up
    2) All in one items
    3) Add to basket | remove items from basket
    4) slips of payment
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void create_account(char *user_name, char *pass_word);
void log_in(char *user_name, char *pass_word);
void items_list();

void create_account(char *user_name, char *pass_word)
{
    printf("Enter username: ");
    scanf("%s", user_name);
    printf("Enter password: ");
    scanf("%s", pass_word);
    log_in(user_name, pass_word);
    // items_list();
}
void log_in(char *user_name, char *pass_word)
{
    char user_input[20];
    char pass_input[20];
    printf("Enter username: ");
    scanf("%s", user_input);
    printf("Enter password: ");
    scanf("%s", pass_input);

    if (strcmp(user_input, user_name) == 0 && strcmp(pass_input, pass_word) == 0)
    {
        printf("\nSuccessfully Logged in !\n");
        items_list();
    }
    else
    {
        printf("\nInvalid username or password \n");
    }
}

void items_list()
{
    printf("\n\t WHAT ITEMS DO YOU WANNA PURCHSE SIR/MAM\n");
    char item_name[30];
    FILE *items_list;

    if (items_list == NULL)
    {
        printf("Error opening the file !!");
        return;
    }

    items_list = fopen("items.txt", "r");
    int id = 1;
    while (fscanf(items_list, "%s", item_name) != EOF)
    {
        printf("%d) %s\n", id, item_name);
        id++;
    }
    int basket[10], index = 0;
    printf("\nChoose items based on their ID (max 10, enter -1 to stop):\n");

    do
    {
        scanf("%d", &basket[index]);
    } while (basket[index++] != -1 && index < 10);

    printf("\nYour items are: \n");
    for (int i = 0; i < index - 1; i++)
    {
        printf("%d ", basket[i]);
    }
}

int main()
{
    printf("\n===================================================================\n");
    printf("\t\tWELCOME TO ONLINE SHOPPING APPLICATION\n");
    printf("===================================================================\n");

    char user_name[20];
    char pass_word[20];
    int choice;
    printf("\t\n1) Sign-in \t\t 2) Log-in\n");
    printf("New here? ==> ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        create_account(user_name, pass_word);
        break;
    case 2:
        log_in(user_name, pass_word);
        break;
    default:
        printf("Invalid choice ");
        break;
    }
    return 0;
}
