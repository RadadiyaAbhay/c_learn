#include<stdio.h>
main(){
	int n,a;
	
	printf("Enter row value = ");
	scanf("%d",&n);
	
	printf("Enter col value = ");
	scanf("%d",&a);
	
	int arr[n][a],i,j,sum=0;
	
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter value of [%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}	
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
	printf("Diagonal Elements = \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("%d",arr[i][j]);
				sum+=arr[i][j];
			}
		}	
		printf("\n");
	}
	
		printf("sum of diagonal elements = %d \n",sum);
}