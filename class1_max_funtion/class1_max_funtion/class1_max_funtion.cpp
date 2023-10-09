// class1_max_funtion.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int max(int x,int y);
	int a,b,c;
	scanf_s("%d,%d",&a,&b);
	c=max(a,b);
	printf("%d\n",c);
	return 0;
}

int max(int x,int y){
	/*
	if(x>y){
		return x;
	}else{
		return y;
	}*/
	return x>y?x:y;
}

