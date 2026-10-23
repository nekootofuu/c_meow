#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int t1=a*60+b;
    int t2=c*60+d;
    int diff=t2-t1;
    if(diff<0){
        diff+=24*60;
    }
    int hour=diff/60;
    int minute=diff%60;
    printf("%d %d",hour,minute);
    return 0;
}