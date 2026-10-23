#include<stdio.h>
int main(){
    int num = 25;
    double pi = 3.1415926;
    printf("十进制：%d\n", num);
    printf("八进制：%o\n", num);
    printf("十六进制：%x\n", num);
    printf("宽度6：%6d\n", num);
    printf("补0宽度6：%06d\n", num);
    printf("保留2位小数：%.2f\n", pi);
    return 0;
}  