#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=7;row++){
		if(row==1||row==7){
			for(col=1;col<2;col++){
			printf(" ",col);
		}
			for(col=2;col<=4;col++){
			printf("*");
		}
		}else if(row==2||row==6||row==5){
			for(col=1;col<=1;col++){
			printf("*");
		}
		for(col=2;col<5;col++){
			printf(" ",col);
		}
		for(col=5;col<=5;col++){
			printf("*");
		}
	}else if(row==4){
		for(col=1;col<=1;col++){
			printf("*");
		}
		for(col=2;col<3;col++){
			printf(" ",col);
		}
		for(col=3;col<=5;col++){
			printf("*");
		}
	
	}else{
		for(col=1;col<=1;col++);
		printf("*");
	}
		
		printf("\n");
	}
}