#include<stdio.h>
cube(float n){
	printf("Cube Of %.2f = %.2f",n,n*n*n);
}
main(){
	float a;
	printf("Enter No. = ");
	scanf("%f",&a);
	
	cube(a);
}