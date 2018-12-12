#include <stdio.h>
int prime(int n){
	int m=0,x,i,y;
	if(n==0)
	y=0;
	else{
	for(i=0;i<n-1;i++){
		x=n/(i+2);
		if(n==x*(i+2)) 
		m=m+i+2;
	}
	if(m==n)
    y=1;
	else 
	y=0;
}
	return y;
}
int main(){
	int n,i,j,m,sum,msum,pro,k,suma=0,num=0,max=0;
	int x[100];
	for(n=100;n<10000;n++){
	m=n;
	i=0;
	while(m!=0){
		i++;
		x[i]=m%10;
		m=m/10;
	} 
	pro=1;
	sum=0;
	msum=0;
	for(j=0;j<i;j++){
		pro=pro*x[j+1];
		sum=sum+x[j+1];
		msum=msum+x[j+1]*x[j+1];
	}
	k=prime(pro)*prime(sum)*prime(msum)*prime(n);
	if(k==1){
    num++;
    suma=suma+n;
    max=n;
}
	} 
		printf("超级素数个数为%d\n",num);
			printf("超级素数和为%d\n",suma);
				printf("最大超级素数为%d\n",max);
	return 0;
} 
