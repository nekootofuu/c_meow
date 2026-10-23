#include<stdio.h>
int main(){
    int arr[100];
    int n,t;
    scanf("%d%d",&n,&t);

    for(int i = 0; i < n;++i){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; ++i){
        int min_pos = i;
        for(int j = i; j < n; ++j){
            if(arr[min_pos] > arr[j])
            min_pos = j;
        }
        int temp = arr[min_pos];
        arr[min_pos] = arr[i];
        arr[i] = temp;
    }

    int i = 0, j = n - 1;
    int ans = -1;
    while(i <= j){
        int mid = (i + j) / 2;
        if(arr[mid] > t) 
            j = mid - 1;
        else if(arr[mid] < t) 
            i = mid + 1;
        else{
            ans = mid;
            break;
        }
    }

    if(ans != -1)
        printf("%d\n", ans);
    else 
        printf("Not found\n");
    return 0;
}