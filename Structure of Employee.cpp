#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct employee
{
    char name[20];
    char id[20];
    int exp;
    int salary;
};
int main()
{
    struct employee emp[5];
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nEnter Name of Employee:");
        scanf("%s",&emp[i].name);
        printf("\nEnter ID of Employee: ");
        scanf("%s",&emp[i].id);
        printf("\nEnter Experience of the Employee: ");
        scanf("%d",&emp[i].exp);
        printf("\nEnter Salary of the Employee: ");
        scanf("%d",&emp[i].salary);
    }
    printf("Details of 5 Employees \n");
    for(i=0;i<5;i++)
    {
        printf("Employee %d\n",i+1);
        printf("Name:%s\n",emp[i].name);
        printf("ID:%s\n",emp[i].id);
        printf("Experience:%d\n",emp[i].exp);
        printf("Salary:%d\n",emp[i].salary);
    }
    return 0;
}
