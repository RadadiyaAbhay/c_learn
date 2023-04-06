#include<stdio.h>
main(){
	int n;
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array[n],i;
	
	for(i=0;i<n;i++){
		printf("Enter value of %i =",i);
		scanf("%d",&array[i]);
	}
		
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}


}