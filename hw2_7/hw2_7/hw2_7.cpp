#include "stdafx.h"
#include <math.h>
int _tmain(int argc,_TCHAR* argv[]){
	printf("sizeof char=%d\n",sizeof(char));
	printf("sizeof short=%d n", sizeof(short));
	printf("sizeof int=%d\n",sizeof(int));
	printf("sizeof long=%d\n",sizeof(long));
	printf("sizeof long long=%d\n",sizeof(long long));
	printf("sizeof unsigned char=%d\n",sizeof(unsigned char));
	printf("sizeof unsigned short=%d\n", sizeof(unsigned short));
	printf("sizeof unsigned int=%d n", sizeof(unsigned int));
	printf("sizeof unsigned long=%d\n", sizeof(unsigned long));
	printf("sizeof unsigned long long=%d\n",sizeof(unsigned long long));
	char a0=-128,a1=127;
	short b0=-32768,b1=32767;
	int c0,c1; c0=0-2147483648,c1=2147483647;
	long d0,d1; d0=0-2147483648,d1=2147483647;
	long long e0,e1; e0=0-9223372036854775808,e1=9223372036854775807;
	printf("\n char:%d to %d \n short:%d to %d \n int:%d to %d \n",a0,a1,b0,b1,c0,c1);
	printf("\n long:%ld to %ld \n long long:%lld to %lld \n",d0,d1,e0,e1);
	return 0;
}