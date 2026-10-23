#include<stdio.h>

int main()
{
	int height=0;
	scanf("%d",&height);

    double total_feet=height/30.48;
    int foot=total_feet;
    int inch=(total_feet-foot)*12;
    printf("%d %d\n",foot,inch);
    
    return 0;
}
