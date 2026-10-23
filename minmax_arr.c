#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    if (scanf("%d", &n) != 1 || n <= 0){
        return 1;
    }

    int *arr = malloc(n * sizeof(*arr));
    if (arr == NULL){
        return 1;
    }    

    for (int i = 0; i < n; ++i){
        if (scanf("%d", &arr[i]) != 1){
            free(arr);
            return 1;
        }
    }

    int sum;
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; ++i){
        if (min > arr[i]){
            min = arr[i];
        }
        if (max < arr[i]){
            max = arr[i];
        }
        sum += arr[i];
    }
    printf("min=%d,max=%d,sum=%d",min,max,sum);
    free(arr);
    return 0;
}