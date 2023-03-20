#include <stdio.h>
main(){
	float x, y, z, i;
	
	printf("Enter value of x = ");
	scanf("%f",&x);
	
	printf("Enter value of y = ");
	scanf("%f",&y);
	
	printf("Enter value of z = ");
	scanf("%f",&z);

	i=(x+y+z)*(x+y+z);
	
	printf("(x+y+z)2 = %f\n",i);
	
}