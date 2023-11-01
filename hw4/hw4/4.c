#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define ll long long
char s[40];
ll ans=0;
void main(){
	int i=0;
	scanf("%s",s);
	for(;i<strlen(s);i++) ans=(ans<<1)+s[i]-'0';
	printf("%lld\n",ans);
	getchar();getchar();
}