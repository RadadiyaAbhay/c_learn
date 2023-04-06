#include<stdio.h>
main(){
	int n,i;
	
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array1[n],array2[n];
	
	for(i=0;i<n;i++){
		printf("Enter value of %i =",i);
		scanf("%d",&array1[i]);
	}
	for(i=0;i<n;i++){
		array2[i]=array1[i];
	}
	printf("The original element = ");
	for(i=0;i<n;i++){	
		printf("%d ",array1[i]);
	}
	printf("\nThe Copy element =");
	for(i=0;i<n;i++){	
		printf("%d ",array2[i]);
	}
}