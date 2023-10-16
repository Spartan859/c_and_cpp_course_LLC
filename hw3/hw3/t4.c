#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main(){
	int ssd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int yy,mm,dd;
	int ans;
	scanf("%d%d%d",&yy,&mm,&dd);
	ans=dd;
	if(yy%4==0&&yy%100!=0) ++ssd[2];
	if(yy%400==0) ++ssd[2];
	for(i=0;i<mm;i++) ans+=ssd[i];
	printf("%d\n",ans);
	getchar();getchar();
}