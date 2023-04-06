#include<stdio.h>
main(){
	int arr[5][4];
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("Enter Matrix value [%i][%i]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");		
	}

}