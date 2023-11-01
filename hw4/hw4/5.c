#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n;
void main(){
	int i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;i==0?j<=n:j<=i;j++){
			if(!(i|j)){
				if(n>=10) printf("+  ");
				else printf("+ ");
			}
			else if(j+n>=10) printf("%-2d ",i+j);
			else printf("%d ",i+j);
		}
		puts("");
	}
	getchar();getchar();
}