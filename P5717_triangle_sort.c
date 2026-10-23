#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&abs(a-b)<c){
		if(a*a+b*b<c*c||b*b+c*c<a*a||a*a+c*c<b*b){
			printf("Acute triangle\n");
		}else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
			printf("Right triangle\n");
		}else{
			printf("Obtuse triangle\n");
		}

		if(a==b||b==c||c==a){
			printf("Isosceles triangle\n");
			if(a==b&&b==c&&c==a){
				printf("Equilateral triangle\n");
			}
		}
	}else{
		printf("Not triangle\n");
	}
}