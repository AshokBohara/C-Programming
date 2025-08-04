#include <stdio.h>

struct Employee
{
    char name[100];
    char address[100];
    char post[100];
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter name, address, post and salary of employee:\n");
    scanf("%s %s %s %f", e.name, e.address, e.post, &e.salary);

    printf("Name = %s\n", e.name);
    printf("Address = %s\n", e.address);
    printf("Post = %s\n", e.post);
    printf("Salary = %.2f\n", e.salary);

    return 0;
}
