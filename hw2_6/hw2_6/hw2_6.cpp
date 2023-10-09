// hw2_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void swap(char*a,char*b){
	char tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char a[5];
	int i;
	scanf_s("%s",a,sizeof(a));
	for(i=0;i<4;i++){
		a[i]=(a[i]-'A'+9)%26+65;
	}
	swap(a,a+2);
	swap(a+1,a+3);
	printf("The encrypted chars are %s\n",a);
	return 0;
}

