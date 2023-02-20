#include<stdio.h>

struct time
{
    int hr;
    int min;
    int sec;

}; //end of struct

void acceptTime(struct time *t)
{
    printf("Enter hr,min,sec");
    scanf("%d%d%d", &t->hr,&t->min,&t->sec);

}
void printTime(struct time t)
{
    printf("\n time=%d:%d:%d",t.hr,t.min,t.sec);

}

int main()
{
    struct time t;
    //t.hr=12;
    //t.min = 58;
    //t.sec = 45;
    acceptTime(&t);
    printTime(t);
    return 0;
}