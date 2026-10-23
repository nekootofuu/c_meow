#include<stdio.h>

int main()
{
   const int AMOUNT=100;
   int price=0;
   
   printf("ÊäÈë½ğ¶î");
   scanf("%d",&price);
   
   int change=AMOUNT-price;
   
   printf("ÕÒÄã%d\n",change);

    return 0;
}
