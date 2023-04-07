#include<stdio.h>
main(){
	int n;
	
	printf("Enter length value = ");
	scanf("%d",&n);
	
	int arr[n],i;
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter value of [%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n");
	printf("Reverse Number  = ");
	for(i=(n-1);i>=0;i--){            
		printf("%d ",arr[i]);	
	}
}