#include<stdio.h>
swap(int *n1, int *n2){
	int *n3;
	n3=n1;
	n1=n2;
	n2=n3;
	
	printf("a = %d b = %d",*n1,*n2);
}
main(){
	int a,b;
	
	printf("Enter value of a = ");
	scanf("%d",&a);
	printf("Enter value of b = ");
	scanf("%d",&b);
	
	swap(&a,&b);
}