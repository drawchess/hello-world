
#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,x1,x2,delta;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	delta=b*b-4*a*c;
	if(delta>=0){
		x1=(-b+sqrt(delta))/2*a,x2=(-b-sqrt(delta))/2*a;
		printf("x1=%lf x2=%lf",x1,x2);
	} 
	return 0;
}
