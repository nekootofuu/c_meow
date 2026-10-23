#include<stdio.h>
#include<ctype.h>

int main(){
    long count[4] = { 0 };
    int c;
    while ((c = getchar()) != EOF){
        unsigned char uc = (unsigned char)c;
        size_t k;
        if (isalpha(uc))
        k = 0;
        else if (isdigit(uc))
        k = 1;
        else if (isspace(uc))
        k = 2;
        else
        k = 3;
        count[k]++;
    }
    printf("字母 %ld,数字 %ld,空白 %ld,其他 %ld",
    count[0], count[1], count[2], count[3]);
    return 0;
}