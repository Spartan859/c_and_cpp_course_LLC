#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char sa[25],sb[25];
void main(){
	int i=0,j=0;
	gets(sa);
	gets(sb);
	for(;i<strlen(sa)||j<strlen(sb);i++,j++){
		if(i<strlen(sa)) putchar(sa[i]);
		if(j<strlen(sb)) putchar(sb[i]);
	}
	getchar();getchar();
}