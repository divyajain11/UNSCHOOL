//Task: Structures
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int employee_id[20];
    float experience[2];
    float salary[7];
};
int main()
{


    struct employee e[5];
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("Enter name of employee %d:\n",i+1);
        scanf("%s",&e[i].name);
        printf("Enter employee %d Id:\n",i+1);
        scanf("%d",&e[i].employee_id);
        printf("Enter years of experience of employee %d:\n",i+1);
        scanf("%f",&e[i].experience[0]);
        printf("Enter salary of employee %d:\n",i+1);
        scanf("%f",&e[i].salary[0]);
    }

    printf("\nNow printing employee details...");
    for(i=0;i<5;i++)
    {
        printf("\nName of employee %d: %s",i+1,e[i].name);
        printf("\nEmployee %d Id: %d",i+1,e[i].employee_id);
        printf("\nYears of experience of employee %d: %f",i+1,e[i].experience[0]);
        printf("\nSalary of employee %d: %f",i+1,e[i].salary[0]);
    }

    return 0;
}
