#include<stdio.h>
main(){
	float a,b,c,hra,da,ta;
	
	printf("Enter Your Base Salary = ");
	scanf("%f",&a);
	
	hra=(a*10)/100;
	da=(a*5)/100;
	ta=(a*8)/100;
	c=a+hra+da+ta; 
	
	printf("Your Gross Salary = %0.2f\n",c);
}