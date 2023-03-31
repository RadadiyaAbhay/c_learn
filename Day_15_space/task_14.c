#include<stdio.h>
main(){
	char col,c='A';
	int row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<(6-row);col++){
			printf(" ");
		}
		
		for(col='A';col<=c;col++){
			printf("%c",col);
		}
		c++;
		printf("\n");
	}
}