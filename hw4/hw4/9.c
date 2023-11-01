#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cnt[1100];
int n;
void main(){
	int i=0,tmpinput;
	int has_same=0;
	int maxcnt=0,maxval=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&tmpinput);
		cnt[tmpinput]++;
	}
	for(i=0;i<1025;i++){
		if(cnt[i]>maxcnt) has_same=0,maxcnt=cnt[i],maxval=i;
		else if(cnt[i]==maxcnt) has_same=1;
	}
	if(has_same){
		puts("NULL");
	}else printf("Its sequential pattern is: mode %d, freq %d\n",maxval,maxcnt);
	getchar();getchar();
}