#include<stdio.h>

main(){
	char col,row;
	
	for(row='A';row<='E';row++){
		for(col='A';col<=row;col++){
			printf("%c",row);
		}
		printf("\n");
	}
}