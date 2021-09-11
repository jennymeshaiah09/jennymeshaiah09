#include<stdio.h>
int whichDay(int);
int whichDay(int num)
{
	int res;
	res=2*num-1;
	return res;
}
int main()
{
	int n,ans;
	printf("Enter nth Golden egg:");
	scanf("%d",&n);
	ans=whichDay(n);
	printf("day=%d",ans);
	return 0;
}
