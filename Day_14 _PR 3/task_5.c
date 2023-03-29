#include<stdio.h>
main(){
	int a,sum=1,b=1;
	
	printf("Enter a value =");
	scanf("%i",&a);
	
	do{
		sum=sum*b;
		b++;
	}while(b<=a);
	printf("calculation factorial of a number = %d",sum);
}