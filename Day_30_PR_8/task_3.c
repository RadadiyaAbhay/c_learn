#include<stdio.h>
main(){
	int arr[5],i;
	for(i=0;i<5;i++){
		printf("Enter Number %d = ",i );
		scanf("%d",&arr[i]);
	}
	int *array[5];
	printf("\n");
	printf("Reverse Array = ");
	
	for(i=4;i>=0;i--){
		array[i]= &arr[i];
		printf("%d ",*array[i]);
	}
	
}