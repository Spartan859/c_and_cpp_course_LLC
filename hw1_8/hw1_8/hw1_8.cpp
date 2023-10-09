// hw1_8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	float a,b,c,disc,x1,x2,p,q;
	printf("input a,b,c:");
	scanf_s("%f,%f,%f",&a,&b,&c);
	if(a==0)
		if(b==0)
			if(c==0)
				printf("It is trivial.\n");
			else
				printf("It is impossible.\n");
		else
		{
			printf("It has one solution:\n");
			printf("x=%6.2f\n",-c/b);
		}
	else
	{
		disc=b*b-4*a*c;
		if(disc>=0)
			if(disc>0)
			{
				printf("It has two real solutions:\n");
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("x1=%6.2f, x2=%6.2f\n",x1,x2);
			}
			else
			{
				printf("It has two same real solutions:\n");
				printf("x1=x2=%6.2f\n",-b/(2*a));
			}
		else
		{
			printf("It has two complex solutions:\n");
			p=-b/(2*a);
			q=sqrt(-disc)/(2*a);
			printf("x1=%6.2f+%6.2fi, x2=%6.2f-%6.2fi\n",p,q,p,q);
		}
	}
	return 0;
}

