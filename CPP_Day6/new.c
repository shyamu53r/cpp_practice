#include<stdio.h>



int main() {
double a = 1.2;
double *p = &a;
double **pp = &p;
printf("%lf\n", a);
printf("%lf\n", *p);
printf("%lf\n", **pp);
return 0;
}