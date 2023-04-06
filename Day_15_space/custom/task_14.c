#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=7;row++){
		if(row==1||row==7){
			for(col=1;col<=5;col++){
			printf("*");
		}
		}else{
			for(col=1;col<3;col++){
				printf(" ");
			}
			for(col=3;col<=3;col++){
			printf("*");
		}		
	}
		
		printf("\n");
	}
}