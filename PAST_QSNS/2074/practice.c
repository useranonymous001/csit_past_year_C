

#include <stdio.h>
#include <string.h>

struct address
{
    char location[20];
};
struct person
{
    char name[20];
    struct address add;
};

void pass_structure(struct person p)
{
    printf("\n\nname = %s\nLocation= %s", p.name, p.add.location);
}

int main()
{
    struct person per;
    printf("enter name and address: ");
    scanf("%s%s", per.name, per.add.location);

    // printf("\n\nname = %s\nLocation= %s", per.name, per.add.location);
    pass_structure(per);

    // int hcf, greatest, num1, num2, num3;

    // printf("Enter two numbers: ");
    // scanf("%d%d%d", &num1, &num2, &num3);

    // smallest = (num1 > num2) ? num2 : num1;
    // int greatest = (num1 > num2) ? num1 : num2;

    // for (int i = smallest; i <= smallest; i--)
    // {
    //     if (num2 % i == 0 && num1 % i == 0)
    //     {
    //         printf("The hcf of %d and %d is %d", num1, num2, i);
    //         break;
    //     }
    // }
    // while (smallest != 0)
    // {
    //     if (num2 % smallest == 0 && num1 % smallest == 0)
    //     {
    //         printf("The hcf of %d and %d is %d", num1, num2, smallest);
    //         break;
    //     }
    //     smallest--;
    // }

    // for (int i = greatest; i >= greatest; i++)
    // {
    //     if (i % num1 == 0 && i % num2 == 0)
    //     {
    //         printf("\nThe lcm of %d and %d is %d", num1, num2, i);
    //         break;
    //     }
    // }

    // while (1)
    // {
    //     if (greatest % num1 == 0 && greatest % num2 == 0)
    //     {
    //         printf("\nThe lcm of %d and %d is %d", num1, num2, greatest);
    //         break;
    //     }
    //     greatest++;
    // }

    // greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // if (num1 > num2)
    // {
    //     if (num1 > num3)
    //     {
    //         greatest = num1;
    //     }
    //     else
    //     {
    //         greatest = num3;
    //     }
    // }
    // else
    // {
    //     if (num2 > num3)
    //     {
    //         greatest = num2;
    //     }
    //     else
    //     {
    //         greatest = num3;
    //     }
    // }

    // greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    // printf("the greatest is %d", greatest);

    // int second_greatest;

    // second_greatest = (num1 > num2) ? ((num1 > num3) ? ((num3 > num2) ? num3 : num2) : num1) : ((num2 > num3) ? ((num3 > num1) ? num3 : num1) : num2);

    // printf("the second greatest is %d", second_greatest);

    int count = 0;
    int sum = 0, num = 0;
    // while (count != 10)
    // {
    //     sum += num;
    //     num += 2;
    //     count++;
    // }

    // for (int i = 0; count < 10; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //         count++;
    //     }
    // }
    // printf("The sum of first 10 even number is %d", sum);

    // float e = 23.232;
    // int result = (int)e;
    // printf("\n%d", result);

    // int arr[] = {12, 312, 43, 13, 34};

    // int length = sizeof(arr) / 4;
    // int size = sizeof(arr);
    // printf("%d ", length);
    // printf("%d ", size);
    // printf("%d ", arr[length - 1]);

    // declaring an string

    // by char array

    // char reversed[20];
    // char name[10] = "rohan";

    // strcpy(reversed, name);
    // strrev(reversed);
    // printf("name = %s\n", name);
    // printf("name = %s\n", reversed);

    return 0;
}