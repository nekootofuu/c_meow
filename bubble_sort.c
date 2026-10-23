#include<stdio.h>
#include<stdbool.h>
void swap(int * pa, int * pb){
    int temp = * pa;
    * pa = * pb;
    * pb = temp;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; ++i){
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j],&arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }

    for(int i = 0; i < n; ++i){
        printf("%d ",arr[i]);
    }
    return 0;
}