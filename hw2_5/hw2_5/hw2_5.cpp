// hw2_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int in_a,in_b;
	int da,db,ha,hb,ma,mb;
	int dc,hc,mc;
	scanf_s("%d%d",&in_a,&in_b);
	da=in_a/10000;
	db=in_b/10000;
	ha=in_a/100;ha%=100;
	hb=in_b/100;hb%=100;
	ma=in_a%100;
	mb=in_b%100;
	ma=da*24*60+ha*60+ma;
	mb=db*24*60+hb*60+mb;
	mb-=ma;
	mc=mb%60;
	hc=mb/60;hc%=24;
	dc=mb/(24*60);
	printf("The journey time is %dday %d hrs %d mins.\n",dc,hc,mc);
	return 0;
}

