// hw1_3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <math.h>
#define PI acos(-1.0)


int _tmain(int argc, _TCHAR* argv[])
{
	double a=60;
	a=a/180*PI;
	double y=sqrt((1-cos(a))/2);
	printf("%g\n",y);
	return 0;
}

