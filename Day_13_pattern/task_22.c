#include<stdio.h>
main(){
	int col,row;
	char t='A';
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			
			printf("%c",t);
			t++;
		}
		
		printf("\n");
	}
}