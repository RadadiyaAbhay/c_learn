#include<stdio.h>

main(){
	int row,col;
	
	for(row=1;row<=5;row++){
		
		for(col=1;col<=(6-row);col++){
			printf(" ");
		}
		
		for(col=row;col>=1;col--){
			printf("%d",col);
		}
		printf("\n");
	}
}