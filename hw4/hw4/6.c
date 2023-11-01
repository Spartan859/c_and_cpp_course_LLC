#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n;
int check_num(int a,int b);
void main(){
	int i=0;
	scanf("%d",&n);                                                              
	for(i=0;i*n<100000;i++){
		if(check_num(i,i*n)){
			printf("%05d/%05d=%d\n",i*n,i,n);
		}
	}
	getchar();getchar();
}

int check_num(int a,int b){
	int apr[10]={0};
	int ok=1;
	int i=0;
	for(i=0;i<5;i++){
		apr[a%10]=1;
		a/=10;
	}
	for(i=0;i<5;i++){
		apr[b%10]=1;
		b/=10;
	}
	
	for(i=0;i<10;i++) ok&=apr[i];
	return ok;
}