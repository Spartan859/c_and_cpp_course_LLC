#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct itm{
	int a;
	int b;
}A[405],c;
int a[25][25],n,m;
void main(){
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++){
			scanf("%d",a[i]+j);
			A[(i-1)*m+j-1].a=a[i][j];
		}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ",a[i][j]);
		}
		puts("");
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			A[(i-1)*m+j-1].b=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
			printf("%d ",A[(i-1)*m+j-1].b);
		}
		puts("");
	}
	for(i=0;i<n*m;i++)
		for(j=1;j<n*m;j++){
			if(A[j].b>A[j-1].b){
				c=A[j];
				A[j]=A[j-1];
				A[j-1]=c;
			}
		}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ",A[(i-1)*m+j-1].a);
		}
		puts("");
	}
	getchar();getchar();
}