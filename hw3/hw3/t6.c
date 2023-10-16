#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<n-i;j++) putchar(' ');
		for(j=0;j<i;j++) printf("%d ",i+1);
		printf("%d\n",i+1);
	}
	getchar();getchar();
}