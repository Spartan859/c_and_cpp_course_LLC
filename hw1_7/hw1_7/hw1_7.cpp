// hw1_7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	char s[15];
	gets_s(s);
	for(int i=0;i<3;i++){
		putchar(s[i*3+1]);
		putchar(s[i*3]);
	}
	puts("");
	return 0;
}

