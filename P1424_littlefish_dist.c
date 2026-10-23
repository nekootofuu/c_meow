#include<stdio.h>
int main(){
    int today,n;
    scanf("%d%d",&today,&n);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(today!=6 && today!=7) cnt++;
        today++;
        if(today>7) today=1;
    }
    printf("%d",cnt*250);
    return 0;
}