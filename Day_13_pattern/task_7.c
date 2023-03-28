#include<stdio.h>
main(){
	int col,row;
	
	for(row=5;row>=1;row--){
		for(col=1;col<=row;col++){
			printf("%d",col);
		}
		printf("\n");
	}
}