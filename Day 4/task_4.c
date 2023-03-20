#include <stdio.h>
main(){
	float x, y, f;
	
	printf("Enter value of x = ");
	scanf("%f",&x);
	
	printf("Enter value of y = ");
	scanf("%f",&y);

	f=(x*x*x)-(3*(x*x)*y)+(3*x*(y*y))-(y*y*y);
	
	printf("(x-y)3 = %f\n",f);
	
}