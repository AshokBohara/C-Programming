#include<stdio.h>
struct employee
{
    char name[100];
    char address[100];
    char post[100];
    float salary;
    int id;
};
int main()
{
    struct employee e[2];
    int i;
    printf("Enter the name, address, post, and salary of 2 employees:\n");
for(i=0;i<2;i++)
{
    scanf("%s %s %s %f %d", e[i].name, e[i].address, e[i].post, &e[i].salary,&e[i].id);
}

    printf("\nDisplaying employees with salary > 10000:\n");
    for(i=0;i<2;i++)
    {
        if(e[i].salary > 10000)
        {
            printf("Name: %s, Address: %s, Post: %s, Salary: %.2f,id : %d\n",
            e[i].name, e[i].address, e[i].post, e[i].salary, e[i].id);
        }
    }
    return 0;
}
