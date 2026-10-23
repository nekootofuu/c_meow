#include<stdio.h>
int main()
{
    int ret1=0,ret2=0;
    int x;
    scanf("%d",&x);
    if(x%2==0)
    ret1=1;
    if(x>4&&x<=12)
    ret2=1;
    switch(ret1+ret2)
    {
        case 0:
            printf("0 0 0 1");
            break;
        case 1:
            printf("0 1 1 0");
            break;
        case 2:
            printf("1 1 0 0");
            break;
    }
    return 0;
}