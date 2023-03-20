#include<stdio.h>
main(){
	
	int a, b ,c ,d ;
	
	printf("Enter value of a = ");
	scanf("%i", &a);
	
	printf("Enter value of b = ");
	scanf("%i", &b);
	
	printf("Enter value of c = ");
	scanf("%i", &c);
	
	printf("Enter value of d = ");
	scanf("%i", &d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
			}else{
				printf("d is max");
			}
		}else
			if(c>d){
				printf("c is max");
			}else{
				printf("d is max");
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