#include<stdio.h>
main(){
	int n,i;
	
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array[n];
	
	for(i=0;i<n;i++){
		printf("Enter value of %i =",i);
		scanf("%d",&array[i]);
	}
	printf("Reverse value = ");
	for(i=(n-1);i>=0;i--){	
		printf("%d ",array[i]);
	}
}