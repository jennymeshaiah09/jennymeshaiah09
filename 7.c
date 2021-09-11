#include<stdio.h>
void encrypt(char[]);
int main()
{
	char msg[15];
	printf("enter msg:");
	scanf("%[^\n]s",&msg);
	encrypt(msg);
}
void encrypt(char msg[15])
{
	printf("%c %c %c %c %c %c %c %c %c %c %c",msg[1]+1,msg[2]+1,msg[3]+1,msg[4]+1,msg[5]+1,msg[6]+1,msg[7]+1,msg[8]+1,msg[9]+1,msg[10]+1,msg[11]+1);
}
