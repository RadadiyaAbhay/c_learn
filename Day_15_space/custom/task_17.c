#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=7;row++){
		if(row==7){
			for(col=1;col<=5;col++){
			printf("*");
		}
		}else{
			for(col=1;col<=1;col++){
			printf("*");
		}		
	}
		
		printf("\n");
	}
}