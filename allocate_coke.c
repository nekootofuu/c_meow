#include<stdio.h>
int main()
{
    double total,avr;
    int num_p,num_b;
    scanf("%lf %d",&total,&num_p);
    num_b=2*num_p;
    avr=total/num_p;
    printf("%.3lf\n%d",avr,num_b);
    return 0;
}