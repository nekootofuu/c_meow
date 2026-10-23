#include<stdio.h>

int main(){
    int number;
    int sum = 0;
    int count = 0;
    printf("Enter numbers to sum (enter -1 to stop):\n");

    scanf("%d", &number);
    while(number != -1) {
        sum += number;
        count++;
        scanf("%d", &number);
    }
    printf("%f\n",1.0*sum/count);

    return 0;
}