#include <stdio.h>
main(){
	float x, y, d;
	
	printf("Enter value of x = ");
	scanf("%f",&x);
	
	printf("Enter value of y = ");
	scanf("%f",&y);

	d=(x*x)+(y*y)-(2*x*y);
	
	printf("(x-y)2 = %f\n",d);
	
}