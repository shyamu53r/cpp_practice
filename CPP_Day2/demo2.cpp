#include<stdio.h>

class empty
{

};

struct  abc
{
    
};

int main()
{
    empty  e;
    printf("\n size of empty class object=%d",sizeof(e));

    printf("\n size of empty structure object=%d",sizeof(struct abc));
    return 0;
}