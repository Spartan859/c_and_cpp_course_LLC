// hw2_4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define ABS(x) ((x)>0?(x):(-(x)))
#define SIGN(x) ((x)>0?(1):(-1))

int _tmain(int argc, _TCHAR* argv[])
{
	double a;
	int xs;
	int ans;
	scanf_s("%lf",&a);
	xs=a*10;
	xs=ABS(xs);
	xs%=10;
	ans=a;
	if(xs>=6){
		ans+=SIGN(ans);
	}
	printf("the result is %d\n",ans);
	return 0;
}

