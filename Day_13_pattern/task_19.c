#include<stdio.h>
main(){
	int col,row,t;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			t++;
			printf("%d",t);
		}
		
		printf("\n");
	}
}