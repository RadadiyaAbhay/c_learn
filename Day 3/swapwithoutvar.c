#include<stdio.h>

main(){
	float a , b;
	
	printf("Enter a= ");
	scanf("%f", &a);
	printf("Enter b= ");
	scanf("%f", &b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("a = %0.1f\n",a);
	printf("b = %0.1f",b);
}