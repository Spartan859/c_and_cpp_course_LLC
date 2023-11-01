#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char s1[2][105],s2[15];
int n,m;
void main(){
	int i,j,k;
	int flag;
	char* sp;
	scanf("%s%s",s1[0],s2);
	m=strlen(s2);
	for(k=0;;k^=1){
		flag=0;
		n=strlen(s1[k]);
		memset(s1[k^1],0,sizeof(s1[k^1]));
		sp=s1[k^1];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(i+j>=n) break;
				if(s1[k][i+j]!=s2[j]) break;
			}
			if(j!=m) *sp++=s1[k][i];
			else i+=m-1,flag=1;
		}
		if(!flag) break;
	}
	puts(s1[0]);
	getchar();getchar();
}