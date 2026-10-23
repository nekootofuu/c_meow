#include<stdio.h>
int main(){
	int arr[3][2];
	int pen_cnt,pen_price,pen_needcnt;
	scanf("%d",&pen_needcnt);
	for(int i=0;i<3;++i){
		scanf("%d%d",&pen_cnt,&pen_price);
		arr[i][0]=pen_cnt;
		arr[i][1]=pen_price;
	}
	int sum[3];
	for(int i=0;i<3;i++){
		if(pen_needcnt%arr[i][0]==0){
			sum[i]=arr[i][1]*(pen_needcnt/arr[i][0]);
		}else{
			sum[i]=arr[i][1]*((pen_needcnt/arr[i][0])+1);
		}
	}
	int min_pos=0;
	for(int i=0;i<3;++i){
		for(int j=i;j<3;j++){
			if(sum[min_pos]>sum[j]){
				min_pos=j;
			}
		}
	}
	printf("%d",sum[min_pos]);
	return 0;
}