#include<stdio.h>
main(){
	float a,b,c,d;
	
	printf("Enter value of a = ");
	scanf("%f",&a);
	
	printf("Enter value of b = ");
	scanf("%f",&b);
	
	printf("Enter value of c = ");
	scanf("%f",&c);
	
	printf("Enter value of d = ");
	scanf("%f",&d);
	
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
			}else{
				printf("d is max");
			}
		}else{
			if(c>d){
				printf("c is max");
			}else{
				printf("d is max");
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("b is max");
			}else{
				printf("d is max");
			}
		}else{
			if(c>d){
				printf("c is max");
			}else{
				printf("d is max");
			}
		}
	}
	
}