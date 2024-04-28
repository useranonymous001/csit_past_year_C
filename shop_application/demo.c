#include <stdio.h>
#include <stdlib.h>

int create_account();
int log_in();

int main()
{
    int choice;
    printf("\t 1) create_new\t\t2) Log in\n");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        create_account();
        break;
    case 2:
        log_in();
        break;
    default:
        printf("Invalid option !!");
        break;
    }
    return 0;
}

// function to create an account:
int create_account()
{
    char user_name[20], pass_word[20];
    printf("Enter user_name: ");
    scanf("%s", user_name);
}