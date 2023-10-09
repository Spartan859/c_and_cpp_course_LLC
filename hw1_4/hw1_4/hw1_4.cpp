// hw1_4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>

#define PI acos(-1.0)


int _tmain(int argc, _TCHAR* argv[])
{
	double a,b,c,x;
	scanf_s("%lf%lf%lf%lf",&a,&b,&c,&x);
	x=x/180*PI;
	double y=a*sin(x)*sin(x)+b*sin(x)*cos(x)+c*cos(x)*cos(x);
	printf("%g\n",y);
	return 0;
}

