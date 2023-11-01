#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

char s[25],c;
void main(){
	int i=0;
	gets(s);
	c=getchar();
	for(i=0;i<strlen(s);i++){
		if(s[i]!=c) putchar(s[i]);
	}
	getchar();getchar();
}