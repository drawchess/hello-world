#include <stdio.h>
int main(){
	int m,n,j,i,z,x[100];
	scanf("%d",&n);
    for(i=0;i<n;i++){
    	int y=0,t=0;
    	scanf("%d",&z);
    	m=z;
    	for(j=0;j<100;j++){
    		x[j]=m%10;
    		m=m/10;
    		t++;
    		if(m==0)
    		break;
		}
		for(j=0;j<t;j++)
		y=y*10+x[j];
		if(y==z){
			printf("yes\n");
		}
		else printf("no\n");
	}
    return 0;
} 
