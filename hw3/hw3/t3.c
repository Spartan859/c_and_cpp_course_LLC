#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void main(){
	int num1,num2;
	char op;
	scanf("%d%c%d",&num1,&op,&num2);
	switch (op)
	{
	case '+':
		printf("%d\n",num1+num2);
		break;
	case '-':
		printf("%d\n",num1-num2);
		break;
	case '*':
		printf("%d\n",num1*num2);
		break;
	case '/':
		if(num2==0) puts("整数2不能为0！");
		else printf("%d\n",num1/num2);
		break;
	case '%':
		if(num2==0) puts("整数2不能为0！");
		else printf("%d\n",num1%num2);
		break;
	default:
		puts("运算符输入错误！");
	}
	getchar();getchar();
}