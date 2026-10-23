#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    for(int i=0;i<n;++i){
        int min_pos=i;
        for(int j=i;j<n;++j){
            if(arr[min_pos]>arr[j]){
                min_pos=j;
            }
        }
        int temp=arr[min_pos];
        arr[min_pos]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}