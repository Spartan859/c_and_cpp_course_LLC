#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main(){
	int cur;
	for(cur=0;cur<(1<<5);cur++){
		if(!((cur&1)+((cur>>1)&1))) continue;
		if(((cur&1)+((cur>>3)&1)+((cur>>4)&1))<2) continue;
		if((cur&1)&((cur>>2)&1)) continue;
		if(((cur>>2)&1)^((cur>>3)&1)){
			printf("the result is a=%d,b=%d,c=%d,d=%d,e=%d\n",cur&1,(cur>>1)&1,(cur>>2)&1,(cur>>3)&1,(cur>>4)&1);
		}
	}
	getchar();getchar();
}