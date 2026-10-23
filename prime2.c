#include<stdio.h>
#include<time.h>
int isPrime(int x,int knownPrimes[],int numKnownPrimes){
    int i;
    int ret=1;
    for(i=0;i<numKnownPrimes;i++){
      if(knownPrimes[i]*knownPrimes[i]>x)
      break;
        if(x%knownPrimes[i]==0){
            ret=0;
            break;
        }
    }
    return ret; 
}
int main(void)
{
    clock_t start = clock();  // 记录开始
    int number;
    scanf("%d",&number);
    int prime[number];
    prime[0]=2;
    int count=1;
    int i=3;
    while(count<number){
        if (isPrime(i,prime,count))
        {
           prime[count++]=i; 
        }
        i++;
    }
    for(i=0;i<number;i++){
        printf("%d",prime[i]);
        if((i+1)%5)printf("\t");
        else printf("\n");
    }
    clock_t end = clock();    // 记录结束
    double time = (double)(end - start)/CLOCKS_PER_SEC;
    printf("\n程序运行时间:%.6f 秒\n", time);
    return 0;
}