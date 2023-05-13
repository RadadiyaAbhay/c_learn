#include<stdio.h>

divi(int n){
	if(n % 3 == 0 && n % 5 == 0){
		printf("Number is Divisible by 3 & 5");
	}else{
		printf("Number is Not Divisible by 3 & 5");
	}
}
main(){
	float a;
	printf("Enter No. = ");
	scanf("%f",&a);
	
	divi(a);
}