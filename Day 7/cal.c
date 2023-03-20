#include<stdio.h>
main(){
	float a,b,sum;
	int choice ;
	
	printf("Enter value of a = ");
	scanf("%f",&a);
	
	printf("Enter value of b = ");
	scanf("%f",&b);
	
	printf("Enter sum for 1 , min for 2 ,mul for 3, div for 4  = ");
	scanf("%i",&choice);
	
	switch(choice){
		case 1:
			sum = a+b;
			printf("sum is = %f",sum);
			break;
		
		case 2:
			sum = a-b;
			printf("sum is = %f",sum);
			break;
		
		case 3:
			sum = a*b;
			printf("sum is = %f",sum);
			break;
		
		case 4:
			sum = a/b;
			printf("sum is = %f",sum);
			break;
		
		
		
		default:
			printf("plz enter 1 to 4");
			break;
		
	}
}
