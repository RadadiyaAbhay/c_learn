#include<stdio.h>
main(){
	int n,i,a;
	
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array1[n],array2[n];
	
	for(i=0;i<n;i++){
		printf("Enter value of %i =",i);
		scanf("%d",&array1[i]);
	}
	printf("Enter delete value position = ");
	scanf("%d",&a);
	
	for(i=0;i<n;i++){
		if(i!=a){
			array2[i]=array1[i];
			printf("%i ",array2[i]);
		}
	}
		
}