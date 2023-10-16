#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int ocp[6];
void dfs(int x,int now){
	int nxt;
	if(x==5){
		printf("%d\n",now);
		return;
	}
	
	for(nxt=1;nxt<=5;nxt++){
		if(!ocp[nxt]){
			ocp[nxt]=1;
			dfs(x+1,now*10+nxt);
			ocp[nxt]=0;
		}
	}
}

void main(){
	//freopen("out.txt","w",stdout);
	printf("%d\n",5*4*3*2);
	dfs(1,0);
	getchar();getchar();
}