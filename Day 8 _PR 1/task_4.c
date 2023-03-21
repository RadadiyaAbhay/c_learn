#include<stdio.h>
main(){
	float a,b,c,hra,da,ta,e,f,r;
	
	printf("Enter Your Base Salary = ");
	scanf("%f",&a);
	
	printf("Enter Your Rent = ");
	scanf("%f",&r);
	
	hra=r-((a*10)/100);
	da=(a*12)/100;
	ta=3600 + ((3600*f)/100);
	c=a+hra+da+ta; 
	
	printf("Your Gross Salary = %f\n",c);
}