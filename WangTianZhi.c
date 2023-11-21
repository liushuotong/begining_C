#include<stdio.h>
int main(void)
{
    float *p1,*p2,*p3;
    p1 = p2 = p3 = NULL;
    float a,b,m;
    p1 = &a;
    p2 = &b;
    p3 = &m;
    scanf("%f %f",&*p1,&*p2);
    *p3 = (*p1 + *p2)/2;
    printf("%f",*p3);
    return 0;
}