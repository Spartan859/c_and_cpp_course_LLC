#define _CRT_SECURE_NO_WARNINGS 1
#define DE(x) printf("%d\n",x)
#include<stdio.h>

void main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%5d\n*%4d\n------\n%5d\n%4d\n------\n%5d\n",a,b,a*(b%10),a*(b/10),a*b);
	getchar();
	getchar();
}