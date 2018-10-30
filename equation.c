//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
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
	printf("x=%lf",x);
	printf("y=%lf",y);
}
 
