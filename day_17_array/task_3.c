#include<stdio.h>
main(){
	int n;
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array[n],i,sum=0,su;
	
	for(i=0;i<n;i++){
		printf("Enter value of %i =",i);
		scanf("%d",&array[i]);
		sum += array[i];
	}
		
		su=sum/n;
		printf("Average of 1D array = %d ",su);

}