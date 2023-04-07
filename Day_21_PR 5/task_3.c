#include<stdio.h>
main(){
	int n;
	
	printf("Enter length value = ");
	scanf("%d",&n);
	
	int arr[n],i,sum=0;
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter value of [%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){            
		sum+=arr[i];
	}
	printf("Sum of All Elements = %d ",sum);
}