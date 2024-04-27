

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct steel_company
{
    char emp_name[50];
    int emp_salary;
    int emp_rank;
};

int main()
{
    char temp[50];
    int number_of_emp;
    struct steel_company emp_details[number_of_emp];

    printf("Enter the number of employee: ");
    scanf("%d", &number_of_emp);

    FILE *emp_file;
    emp_file = fopen("emp_details.txt", "w");
    fprintf(emp_file, "Name\t\tSalary\t\tRank");
    for (int i = 0; i < number_of_emp; i++)
    {

        printf("Enter the Name Salary and Rank of the employe: ");
        scanf("%s%d%d", emp_details[i].emp_name, &emp_details[i].emp_salary, &emp_details[i].emp_rank);

        fprintf(emp_file, "\n%s\t\t%d\t\t%d\n", emp_details[i].emp_name, emp_details[i].emp_salary, emp_details[i].emp_rank);
    }
    fclose(emp_file);

    emp_file = fopen("emp_details.txt", "r");

    for (int i = 0; i < number_of_emp; i++)
    {
        for (int j = i + 1; j < number_of_emp; j++)
        {
            if (emp_details[i].emp_salary > emp_details[j].emp_salary)
            {
                int temp_salary = emp_details[i].emp_salary;
                emp_details[i].emp_salary = emp_details[j].emp_salary;
                emp_details[j].emp_salary = temp_salary;

                strcpy(temp, emp_details[i].emp_name);
                strcpy(emp_details[i].emp_name, emp_details[j].emp_name);
                strcpy(emp_details[j].emp_name, temp);

                int temp_rank = emp_details[i].emp_rank;
                emp_details[i].emp_rank = emp_details[j].emp_rank;
                emp_details[j].emp_rank = temp_rank;
            }
        }
    }
    FILE *new_file;
    new_file = fopen("sorted_details.txt", "w");

    fprintf(new_file, "Name\t\tSalary\t\tRank");
    for (int i = 0; i < number_of_emp; i++)
    {
        fprintf(new_file, "\n%s\t\t%d\t\t%d\n", emp_details[i].emp_name, emp_details[i].emp_salary, emp_details[i].emp_rank);
    }

    return 0;
}