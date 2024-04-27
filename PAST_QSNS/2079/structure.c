/*
structure having name address and fetching the data that are living in kathamandu and have age between 40 and 50.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee
{
    char name[20];
    char address[20];
    int salary;
    int age;
};

int main()
{
    int n;
    printf("Enter the no. of employee: ");
    scanf("%d", &n);
    struct Employee emp[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter name address age salary:\n");
        scanf("%s%s%d%d", emp[i].name, emp[i].address, &emp[i].age, &emp[i].salary);
    }

    printf("name\t address\t age\t salary:\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(emp[i].address, "kathmandu") == 0 && (emp[i].age > 40 &&

                                                         emp[i].age < 50))

            printf("\n%s\t%s\t%d\t%d", emp[i].name, emp[i].address, emp[i].age, emp[i].salary);
    }
    return 0;
}