#include<stdio.h>
main(){
	
	int a, b ,c , d ,e;
	
	printf("Enter value of a = ");
	scanf("%i", &a);
	
	printf("Enter value of b = ");
	scanf("%i", &b);
	
	printf("Enter value of c = ");
	scanf("%i", &c);
	
	printf("Enter value of d = ");
	scanf("%i", &d);
	
	printf("Enter value of e = ");
	scanf("%i", &e);
	
	(a>b)?	
			(a>c)?	
					(a>d)?
							(a>e)?
								printf("a is max")
								:
								printf("e is max")
						:
						(d>e)?
							printf("d is max")
							:
							printf("e is max")
				:
				(c>d)?
					(c>e)?
						printf("c is max")
						:
						printf("e is max")
					:
					(d>e)?
						printf("d is max")
						:
						printf("e is max")
		:
		(b>c)? 
			(b>d)?
				(b>e)? 
					printf("b is max")
					:
					printf("e is max")
				:
				(d>e)?
					printf("d is max")
					:
					printf("e is max")
			:(c>d)?
				(c>e)?
					printf("c is max")
					:
					printf("e is max")
				:
				(d>e)?
					printf("d is max")
					:
					printf("e is max");
}