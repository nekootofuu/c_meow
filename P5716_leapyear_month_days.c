#include<stdio.h>
int y(int arg_year)
{
    int ret=0;
    if(arg_year%4==0){
        if(arg_year%100==0){
            ret=0;
            if(arg_year%400==0)
                ret=1;
        }else{
            ret=1;
        }
    }
    return ret;
}

int main(){
    int year,month;
    scanf("%d%d",&year,&month);
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");
        break;
        case 2:
        if(y(year))
        printf("29");
        else
        printf("28");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30");
        break;
    }
    return 0;
}