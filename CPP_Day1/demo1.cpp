#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);

int main()
{
    int r;
    int sb;
    sb=sub(20,10);
    r=add(22,33);
    cout<<sb<<endl;
    printf("result=%d",r);
    return 0;
}

int add(int a,int b)
{
    int c=a+b;
    return c;
}

int sub(int a,int b){
    int c=a-b;
    return c;
}