// hw2_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int chn_pop,chn_gdpa,ind_pop,ind_gdpa;
	double ans;
	scanf_s("%d%d%d%d",&chn_pop,&chn_gdpa,&ind_pop,&ind_gdpa);
	ans=1.0*chn_pop*chn_gdpa/(1.0*ind_pop*ind_gdpa);
	printf("%lf\n",ans);
	return 0;
}

