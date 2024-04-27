// /*
// STRUCTURES
//     Structure are the user defined data types and provides a way to organize realted datas, represent complex data structures in a very convinient manner.
// */

// #include <stdio.h>

// struct student
// {
//     int roll;
// };
// struct studentDetails // staring structure
// {
//     char name[23];          // member
//     int age;                // strucure member
//     struct student details; // nested structure
// };                          // defining name of the structure

// int main()
// {
//     int n;
//     struct studentDetails std[n];

//     printf("Enter a number of stds: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter %d std name and age and also roll: ", i);
//         scanf("%s%d%d", std[i].name, &std[i].age, &std[i].details.roll);
//     }
//     printf("\n");
//     printf("Name\t\tAge\t\tRoll");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("\n%s\t\t%d\t\t%d", std[i].name, std[i].age, std[i].details.roll);
//     }

//     return 0;
// }

/// Simple use case of nested structure :

#include <stdio.h>
struct employeeDetails
{
    char name[29];
    int salary;
    char address[29];
};
struct google
{
    char location[30];
    struct employeeDetails details;
};

int main()
{
    struct google googleDetails;

    printf("Enter: Name Salary Address Location: ");
    scanf("%s%d%s%s", googleDetails.details.name, &googleDetails.details.salary, googleDetails.details.address, googleDetails.location);

    printf("\nName: %s\nSalary: %d\nAddress: %s\nLocation: %s", googleDetails.details.name, googleDetails.details.salary, googleDetails.details.address, googleDetails.location);

    return 0;
}