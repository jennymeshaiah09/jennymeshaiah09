#include<stdio.h>
float totalbill(float,float);
float totalbill(float pencount,float choccount)
{
	float res;
	res=100-(pencount*1.5+choccount*10);
	return res;
 }
 int main()
 {
    int  pencount,choccount,ans;
 	printf("enter the values:");
 	scanf("%d %d",&pencount,&choccount);
 	printf("remaining charge=%d",ans);
 	return 0;
  } 
