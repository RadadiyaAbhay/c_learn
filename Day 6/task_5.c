#include<stdio.h>
main(){
	
	int a, b ,c;
	
	printf("Enter value of a = ");
	scanf("%i", &a);
	
	printf("Enter value of b = ");
	scanf("%i", &b);
	
	printf("Enter value of c = ");
	scanf("%i", &c);
	
	(a>b)? (a>c) ? printf("a is max"):printf("c is max"):(b>c)? printf("b is max"):printf("c is max");
}