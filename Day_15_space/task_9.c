#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<row;col++){
			printf(" ");
		}
		for(col=5;col>=row;col--){
			printf("%d",col);
		}
		printf("\n");
	}
}