#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter Value of a = ");
	scanf("%d",&a);
	
	printf("Enter Value of b = ");
	scanf("%d",&b);
	

	a=a+b; 
	b=a-b; 
	a=a-b; 
	
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}