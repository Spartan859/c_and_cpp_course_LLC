#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main(){
	int ntp[505]={0};
	int ilm=30,nlm=500;
	int i=0,j=0;
	int n,m;
	int ans=0,cnt=0;
	ntp[1]=1;ntp[2]=0;
	for(i=2;i<ilm;i++){
		if(!ntp[i]){
			for(j=i;i*j<=nlm;j++) ntp[i*j]=1;
		}
	}
	scanf("%d %d",&n,&m);
	if(n>m){
		i=n;
		n=m;
		m=i;
	}
	for(i=n+1;i<m;i++) if(!ntp[i]) ans+=i,++cnt;
	printf("%d %d\n",cnt,ans);
	getchar();getchar();
}