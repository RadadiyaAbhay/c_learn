#include<stdio.h>
main(){
	
	int a, b ,c ;
	
	printf("Enter value of a = ");
	scanf("%i", &a);
	
	printf("Enter value of b = ");
	scanf("%i", &b);
	
	printf("Enter value of c = ");
	scanf("%i", &c);
	
	if(a<b){
		if(a<c){
			printf("a is min");
		}else
			printf("c is min");
	}else{
		if(b<c){
			printf("b is min");
		}else{
			printf("c is min");
		}
	}
}