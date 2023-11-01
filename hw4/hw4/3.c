#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int a[25],b[25],an=0,bn=0;
void main(){
	int i=0,j=0;
	while(scanf("%d",a+an)){
		if(!a[an]) break;
		++an;
	}
	while(scanf("%d",b+bn)){
		if(!b[bn]) break;
		++bn;
	}
	for(;i<an||j<bn;){
		if(i==an){
			printf("%d ",b[j]);
			j++;
			continue;
		}
		if(j==bn){
			printf("%d ",a[i]);
			i++;
			continue;
		}
		if(a[i]<b[j]){
			printf("%d ",a[i]);
			i++;
		}else{
			printf("%d ",b[j]);
			j++;
		}
	}
	getchar();getchar();
}