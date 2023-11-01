#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n,st,m;
int is_killed[1005];
void main(){
	int loop,cnt;
	scanf("%d%d%d",&n,&st,&m);
	printf("%d ",st);
	is_killed[st]=1;
	++st;
	for(loop=1;loop<n;loop++){
		cnt=0;
		for(;;st++){
			if(st>n) st-=n;
			cnt+=is_killed[st]^1;
			if(cnt==m) break;
		}
		printf("%d ",st);
		is_killed[st]=1;
	}
	getchar();getchar();
}