#include <stdio.h>

struct employee
{
    char name[100];
    char address[100];
    char post[100];
    float salary;
};

int main()
{
    struct employee e[4];
    int i;

    printf("Enter the name, address, post, and salary of 4 employees:\n");
    for(i = 0; i < 4; i++)
    {
        scanf("%s %s %s %f", e[i].name, e[i].address, e[i].post, &e[i].salary);
    }

    printf("\nDisplaying employees with salary > 10000:\n");
    for(i = 0; i < 4; i++)
    {
        if(e[i].salary > 10000)
        {
                printf("Name: %s, Address: %s, Post: %s, Salary: %.2f\n",
                e[i].name, e[i].address, e[i].post, e[i].salary);
        }
    }

    return 0;
}

