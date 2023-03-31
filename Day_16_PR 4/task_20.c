#include<stdio.h>

main(){
	int row,col;
	
	for(row=4;row>=1;row--){
		
		for(col=1;col<=row;col++){
			printf(" ");
		}
		
		for(col=row;col<=row;col++){
			printf("*");
		}
		for(col=4;col>row;col--){
			printf(" ");
		}
		for(col=3;col>row;col--){
			printf(" ");
		}
		for(col=col;col>=row;col--){
			printf("*");
		}
		printf("\n");
	}
}