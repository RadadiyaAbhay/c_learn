#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter Value of a = ");
	scanf("%d",&a);
	
	printf("Enter Value of b = ");
	scanf("%d",&b);
	

	c=a; // a=20 b=10 c=20
	a=b; // a=10
	b=c; // b=20
	
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}