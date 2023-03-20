#include<stdio.h>
main(){
	
	int a, b ,c ,d ,e ;
	
	printf("Enter value of a = ");
	scanf("%i", &a);
	
	printf("Enter value of b = ");
	scanf("%i", &b);
	
	printf("Enter value of c = ");
	scanf("%i", &c);
	
	printf("Enter value of d = ");
	scanf("%i", &d);
	
	printf("Enter value of e = ");
	scanf("%i", &e);
	
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("a is min");
				}else{
					printf("e is min");
				}
			}else{
				if(d<e){
					printf("d is min");
				}else{
					printf("e is min");
				}
			}
		}else
			if(c<d){
				if(c<e){
					printf("c is min");
				}else{
					printf("e is min");
				}
			}else{
				if(d<e){
					printf("d is min");
				}else{
					printf("e is min");
				}
			}
	}else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("b is min");
				}else{
					printf("e is min");
				}
			}else{
				if(d<e){
					printf("d is min");
				}else{
					printf("e is min");
				}
			}
		}else{
			if(c<d){
				if(c<e){
					printf("c is min");
				}else{
					printf("e is min");
				}
			}else{
				if(d<e){
					printf("d is min");
				}else{
					printf("e is min");
				}
			}
		}
	}
}