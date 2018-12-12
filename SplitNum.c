#include <stdio.h>
int main() {
	int x,i=0,a[100],j;
	scanf("%d",&x);
	while(x!=0){
		i++;
		a[i]=x%10;
		x=x/10;
	}
	for(;i>0;i--)
	printf("%d ",a[i]);
  return 0; 
}
