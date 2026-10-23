#include<stdio.h>
int main(){
    char arr[4];
    int num[3];
    for(int i=0;i<3;i++){
        scanf("%d",&num[i]);
    }

    scanf("%s",arr);

    for(int i=0;i<3;i++){
        int min_pos=i;
        for(int j=i;j<3;j++){
            if(num[min_pos]>num[j]){
                min_pos=j;
            }
        }
        int temp=num[i];
        num[i]=num[min_pos];
        num[min_pos]=temp;
    }

    for(int i=0;i<3;i++){
        switch(arr[i]){
            case 'A':
            printf("%d ",num[0]);
            break;
            case 'B':
            printf("%d ",num[1]);
            break;
            case 'C':
            printf("%d ",num[2]);
            break;
        }

    }
    return 0;
}