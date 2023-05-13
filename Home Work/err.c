#include<stdio.h>
main(){
	int r,c,i,j,sum=0;
	scanf("%d",&r);
	scanf("%d",&c);
	
	int arr[r][c];
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(i==j){
				printf("%d ",arr[i][j]);
				sum += arr[i][j];
			}
				
		}
		printf("\n");
	}
	printf("%d",sum);
}