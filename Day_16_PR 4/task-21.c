#include<stdio.h>

main(){
	int row,col,t=1;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			printf("%d",t);
			t++;
		}
		
		printf("\n");
	}
}