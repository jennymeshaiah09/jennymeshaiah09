#include<stdio.h>
int calAssPro(int,int,int,int);
int calAssPro(int n,int d1,int d2,int d3)
{
	int ans;
	ans=d1+d2+d3-n*3;
	return ans;
}
int main()
{
	int d1,d2,d3,n,res;
	printf("Enter no of faculty in Dept1=");
	scanf("%d",&d1);
	printf("Enter no of faculty in Dept2=");
	scanf("%d",&d2);
	printf("Enter no of faculty in Dept3=");
	scanf("%d",&d3);
	res=calAssPro(n,d1,d2,d3);
	printf("No of Asst.Prof in the organization=%d",res);
	return 0;
}
