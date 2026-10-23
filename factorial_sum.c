#include<stdio.h>
int main()
{
    int n;
    long long int sum=1,end_sum=0;
    int i;
    
    scanf("%d",&n);
    while(n>=1){
    for(i=1,sum=1;i<=n;i++){
       sum*=i;
    }
    n--;
    end_sum+=sum;
}
    printf("%lld",end_sum);   
    return 0;
}