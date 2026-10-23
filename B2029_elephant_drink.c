#include<stdio.h>
#include<math.h>
int main()
{
    double h,r;
    scanf("%lf%lf",&h,&r);
    int n=ceil(20000/(3.14*r*r*h));
    printf("%d",n);
    return 0;
}