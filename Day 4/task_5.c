#include <stdio.h>
main(){
	float x, y, z, g;
	
	printf("Enter value of x = ");
	scanf("%f",&x);
	
	printf("Enter value of y = ");
	scanf("%f",&y);
	
	printf("Enter value of z = ");
	scanf("%f",&z);

	g = (x+y+z)*(x+y+z)*(x+y+z);
	
	printf("(x+y+z)3 = %f\n",g);
	
}