#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=7;row++){
		for(col=5;col>=1;col--){
			printf("%d",col);
		}
		printf("\n");
	}
}