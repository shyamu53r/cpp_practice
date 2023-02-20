#include<stdio.h>

struct employee

{
    int empid;
    float empsalary;
    char empname;
};

void acceptdata( struct employee *t)
{
    printf("enter id ,name ,salary");
    scanf("%d%c%lf",&t->empid,&t->empname,&t->empsalary);

}

void printData(struct employee t)
{
    printf("\n data= %d \n %c\n %lf\n",t.empid,t.empname,t.empsalary);

}
int main()
{
    struct employee t;

    acceptdata(&t);
    printData(t);
    return 0;

    
}