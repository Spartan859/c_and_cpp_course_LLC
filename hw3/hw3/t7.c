#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main(){
	int ssd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int repeat,mm,dc;
	scanf("%d",&repeat);
	while(repeat--){
		scanf("%d %d",&mm,&dc);
		if(dc<=160){
			printf("%d\n",dc*5);
		}else if(dc<=160+ssd[mm]*6){
			printf("%d\n",160*5+(dc-160)*9);
		}else printf("%d\n",160*5+ssd[mm]*6*9);
	}
	getchar();getchar();
}