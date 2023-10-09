// hw1_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int max(int x,int y);
	int a,b,c,d,e;

	scanf_s("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int ans=a;
	ans=max(ans,b);
	ans=max(ans,c);
	ans=max(ans,d);
	ans=max(ans,e);
	printf("%d\n",ans);
	return 0;
}

int max(int x,int y){
	return x>y?x:y;
}

