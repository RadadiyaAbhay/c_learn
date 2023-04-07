#include<stdio.h>
main(){
	int n;
	
	printf("Enter length value = ");
	scanf("%d",&n);
	
	int arr[n],i,max,min;
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter value of [%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n");
	
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];	
		}
	}
	printf("Maximum Element = %d\n",max);
	printf("Minimum Element = %d",min);
}