#include<stdio.h>
int resist(int,int,int,int,int,int,int,int,int,int);
int main()
{
	int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,res;
	printf("enter the values of r1,r2,r3,r4,r5,r6,r7,r8,r9,r10");
	scanf("%d %d %d %d %d %d %d %d %d %d",&r1,&r2,&r3,&r4,&r5,&r6,&r7,&r8,&r9,&r10);
	res=resist(r1,r2,r3,r4,r5,r6,r7,r8,r9,r10);
	printf("%d",res);
	return 0;
}
int resist(int r1,int r2,int r3,int r4,int r5,int r6,int r7,int r8,int r9,int r10)
{
	int ans;
	ans=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
	return ans;
}
