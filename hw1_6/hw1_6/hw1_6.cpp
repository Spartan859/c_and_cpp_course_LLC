// hw1_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	double x;
	scanf_s("%lf",&x);
	for(int i=0;i<7;i++){
		x=1+1/x;
	}
	printf("%g\n",x);
	return 0;
}

