#include<stdio.h>

main(){
	 
	float a,b;
	 
	printf("Enter a value of a = ");
	scanf("%f",&a);
	
	printf("Enter a value of b = ");
	scanf("%f",&b);
	
	if(a>b){
		printf("b is min");
	}else{
		printf("a is min");
	}
}