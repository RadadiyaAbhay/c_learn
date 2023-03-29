#include<stdio.h>
main(){
	int a=1,sum,number;
	
	printf("Enter multiplication table number =");
	scanf("%i",&number);
	
	do{
		sum=number*a;
		printf("%i * %i = %i\n",number,a,sum);
		a++;
	}while(a<=10);
}