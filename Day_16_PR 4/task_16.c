#include<stdio.h>

main(){
	int row,col;
	
	for(row=1;row<=5;row++){
		for(col=row;col>=1;col--){
			printf("%d",col);
		}
		
		printf("\n");
	}
	for(row=4;row>=1;row--){
		for(col=row;col>=1;col--){
			printf("%d",col);
		}
		printf("\n");
	}
}