#include<stdio.h>
main(){
	const float pie = 3.14;
	float r;
	
	printf("Enter the radius = ");
	scanf("%f",&r);
	float sum= pie*(r*r);
	
	printf("Area of circle = %f",sum);
}