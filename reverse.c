#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int digit;
    int ret=0;

    while(x>0){
        digit=x%10;
        printf("%d", digit);//如想省略前面0将此行注释掉
        ret=ret*10+digit;
        //printf("x=%d, digit=%d, ret=%d\n", x, digit, ret);//如不想省略前面0将此行注释掉
        x/=10;
    }
    //printf("%d\n", ret);//如不想省略前面0将此行注释掉
    return 0;
}