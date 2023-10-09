// hw2_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int a=-2,b=99,c=2147483647;
	unsigned int d=4294954951,f=12345;
	char g='d';
	float h=53.65;
	printf("Int %d, %d, %d, %d, %d, %d, %d\n",(int)a,(int)b,(int)c,(int)d,(int)f,(int)g,(int)h);
	printf("unsigned int %u, %u, %u, %u, %u, %u, %d\n",(unsigned int)a,(unsigned int)b,(unsigned int)c,(unsigned int)d,(unsigned int)f,(unsigned int)g,(unsigned int)h);
	printf("long %ld, %ld, %ld, %ld, %ld, %ld, %ld\n",(long)a,(long)b,(long)c,(long)d,(long)f,(long)g,(long)h);
	printf("short %hd, %hd, %hd, %hd, %hd, %hd, %hd\n",(short)a,(short)b,(short)c,(short)d,(short)f,(short)g,(short)h);
	printf("signed char %d, %d, %d, %d, %d, %d, %d\n",(signed char)a,(signed char)b,(signed char)c,(signed char)d,(signed char)f,(signed char)g,(signed char)h);
	printf("float %f, %f, %f, %f, %f, %f, %f\n",(float)a,(float)b,(float)c,(float)d,(float)f,(float)g,(float)h);
	return 0;
}

