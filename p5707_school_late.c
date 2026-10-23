#include<stdio.h>
#include<math.h>
int main()
{
    int s,v,time_used,time_left;
    scanf("%d %d",&s,&v);
    time_used=ceil(1.0*s/v)+10;
    time_left=480-time_used;
    if(time_left<0){
        time_left+=24*60;
    }
    int hour,minute;
    hour=time_left/60;
    minute=time_left%60;
    printf("%02d:%02d",hour,minute);
    return 0;
}