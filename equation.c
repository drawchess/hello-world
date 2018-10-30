#include <stdio.h>
int main (){
	double a,b,c,d,e,f,x,y;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	printf("d=");
	scanf("%lf",&d);
	printf("e=");
	scanf("%lf",&e);
	printf("f=");
	scanf("%lf",&f);
	x=(c*e-b*f )/(e*a-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	printf("x=%lf\n",x);
	printf("y=%lf",y);
	return 0; 
}
 
