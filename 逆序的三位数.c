#include<stdio.h>

int main()
{
    int k=0;
    scanf("%d",&k);
    int a=k/100;
    int b=(k-100*a)/10;
    int c=k-100*a-10*b;
    printf("%d\n",100*c+10*b+a);
    return 0;
}
