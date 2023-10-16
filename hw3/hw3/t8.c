#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ll long long

ll gcd(ll x,ll y){
	ll tmp;
	if(x<y){tmp=x;x=y;y=tmp;}
	while(y){
		x%=y;
		tmp=x;x=y;y=tmp;
	}
	return x;
}

void main(){
	ll n,m,k;
	ll nx,mx,nmx;
	scanf("%lld%lld%lld",&n,&m,&k);
	++n;++m;
	nmx=k/(n*m/gcd(n,m));
	nx=k/n-nmx;
	mx=k/m-nmx;
	printf("%lld %lld %lld %lld\n",k-mx-nx-nmx,nmx,mx,nx);
	getchar();getchar();
}