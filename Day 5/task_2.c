#include<stdio.h>
main(){
	float a;
	printf("Enter value of a = ");
	scanf("%f",&a);
	
	if(a==0){
		
		printf("a is zero");
	}else if(a<0){
		printf("a is negative");
	}else {
		printf("a is positive");
	}
	
}