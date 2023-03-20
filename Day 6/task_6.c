#include<stdio.h>
main(){
	
	int a, b ,c , d;
	
	printf("Enter value of a = ");
	scanf("%i", &a);
	
	printf("Enter value of b = ");
	scanf("%i", &b);
	
	printf("Enter value of c = ");
	scanf("%i", &c);
	
	printf("Enter value of d = ");
	scanf("%i", &d);
	
	(a>b)? (a>c) ? (a>d) ? printf("a is max"):printf("d is max"):(c>d)? printf("c is max"):printf("d is max"):(b>c)? (b>d)? printf("b is max"):printf("d is max"):(c>d)? printf("c is max"):printf("d is max");
}