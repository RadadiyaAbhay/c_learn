#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<(6-row);col++){
			printf(" ");
		}
		for(col=5;col>=(6-row);col--){
			printf("%d",col);
		}
		printf("\n");
	}
}