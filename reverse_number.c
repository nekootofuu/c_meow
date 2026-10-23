#include<stdio.h>
int main()
{
    char s[10];
    scanf("%s",s);
    for(int i = 4;i >= 0;i--){
        printf("%c",s[i]);
    }
    return 0;
}