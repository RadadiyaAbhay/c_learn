#include<stdio.h>
main(){
	float p, r, t, a, c;
	
	c=100;
	printf("Principal Amount = ");
	scanf("%f",&p);
	printf("annual interest rate = ");
	scanf("%f",&r);
	printf("time (in years) = ");
	scanf("%f",&t);
	
	a = (p*r*t)/c;
	printf("Final Amount = %f",a);
}