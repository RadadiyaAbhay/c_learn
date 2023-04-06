#include <stdio.h>

main() {
	int n,i,sum=0 ;
	printf("Enter value of length = ");
	scanf("%d",&n);
	
  	int array1[n],array2[n];
  		printf("Enter first array value = ");
  	for(i=0;i<n;i++){
  		
  		scanf("%d",&array1[i]);
	  }
	  	printf("Enrter second array value = ");
	for(i=0;i<n;i++){
		
  		scanf("%d",&array2[i]);
	  }  
		printf("Addition Value is =");
	for(i=0;i<n;i++){
		sum=(array1[i]+array2[i]);
		printf("%d ",sum);
	}
	
	
	
}
