#include<stdio.h>

main(){
	float a , b, c ;
	
	printf("Enter a= ");
	scanf("%f", &a);
	printf("Enter b= ");
	scanf("%f", &b);
	
	c=b;
	b=a;
	a=c;
	
	printf("a = %0.1f\n",a);
	printf("b = %0.1f",b);
}