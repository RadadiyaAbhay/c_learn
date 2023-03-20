#include<stdio.h>
main(){
	float b, h;
	
	printf("Enter Base = ");
	scanf("%f",&b);
	printf("Enter Height = ");
	scanf("%f",&h);
	
	float sum=(b*h)/2;
	printf("Sum of Triangle = %f",sum);
}