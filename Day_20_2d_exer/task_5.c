#include<stdio.h>
main(){
	int row,col;
	
	printf("Enter row = ");
	scanf("%d",&row);
	
	printf("Enter col = ");
	scanf("%d",&col);
	
	int arr[row][col],row1,col1,total;
	
	for(row1=0;row1<row;row1++){
		for(col1=0;col1<col;col1++){
			printf("Enter value in [%d][%d] = ",row1,col1);
			scanf("%d",&arr[row1][col1]);
		}
		printf("\n");
	}
	for(row1=0;row1<row;row1++){
		for(col1=0;col1<col;col1++){
			printf("%d\t",arr[row1][col1]);
		}
		printf("\n");
	}
		printf("\n");
	for(col1=0;col1<col;col1++){
		for(row1=0;row1<row;row1++){
			total += arr[row1][col1];
		}
		printf("%d ",total);
		total=0;
	}
}