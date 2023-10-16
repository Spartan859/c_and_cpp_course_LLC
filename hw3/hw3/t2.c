#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define INF 1e200

void main(){
	double seg[7]={36000,144000,300000,420000,660000,960000,INF};
	double rate[7]={3,10,20,25,30,35,45};
	double qk_dec[7]={0,2520,16920,31920,52920,85920,181920};
	double inpt;
	double ans;
	int i;
	scanf("%lf",&inpt);
	inpt-=60000;
	if(inpt<=0) ans=0;
	else{
		for(i=0;i<7;i++){
			if(inpt<=seg[i]){
				ans=inpt*rate[i]/100-qk_dec[i];
				break;
			}
		}
	}
	printf("%.2lf\n",ans);
	getchar();getchar();
}