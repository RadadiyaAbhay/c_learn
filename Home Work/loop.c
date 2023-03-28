#include<stdio.h>
main(){
	int a=100,b=1,c,d;
	
	printf("Enter a Value :");
	scanf("%i",&a);
	
	do{
		printf("%i\n",b);
		b++;
	}while(b<=a);
}