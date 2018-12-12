#include <stdio.h> 
int main(){
	int n,m=0,x,i;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		x=n/(i+2);
		if(n==x*(i+2)) 
		m=m+i+2;
	}
	if(m==n)
	printf("是素数\n");
	else 
	printf("不是素数\n");
	return 0;
}
