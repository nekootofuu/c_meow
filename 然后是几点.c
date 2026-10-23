#include<stdio.h>

int main()
{
	int t1;
    int t2;

    scanf("%d %d",&t1,&t2);
    int hour=t1/100;
    int min=t1%100;
    
    int t3=hour*60+min+t2;
    printf("%d%02d",t3/60,t3%60);
    return 0;
}
