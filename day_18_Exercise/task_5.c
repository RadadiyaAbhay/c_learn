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
	printf("\nEven Number =");
	for(i=0;i<n;i++){
		if(array[i]%2==0){
			printf("%d ",array[i]);
		}
	}
	printf("\nOdd Number =");
	for(i=0;i<n;i++){
		if(array[i]%2==1){
			printf("%d ",array[i]);
		}
	}
}