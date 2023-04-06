#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=7;row++){
		if(row==1||row==3){
			for(col=1;col<=5;col++){
			printf("*");
		}
		}else{
			for(col=1;col<=1;col++){
			printf("*");
		}
		for(col=2;col<5;col++){
			printf(" ",col);
		}
		for(col=5;col<=5;col++){
			printf("*");
		}
	}
		
		printf("\n");
	}
}