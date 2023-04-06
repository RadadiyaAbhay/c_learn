#include<stdio.h>
main(){
	int row,col;
	
	for(row=1;row<=7;row++){
		if(row==3){
			for(col=1;col<=2;col++){
				printf("*");
			}
			for(col=3;col<=4;col++){
				printf(" ",col);
			}
			for(col=5;col<=5;col++){
				printf("*");
			}
		}else if(row==4){
			for(col=1;col<=1;col++){
				printf("*");
			}
			for(col=2;col<=2;col++){
				printf(" ",col);
			}
			for(col=3;col<=3;col++){
				printf("*");
			}
			for(col=4;col<=4;col++){
				printf(" ",col);
			}
			for(col=5;col<=5;col++){
				printf("*");
			}
		}else if(row==5){
			for(col=1;col<=1;col++){
				printf("*");
			}
			for(col=3;col<=4;col++){
				printf(" ",col);
			}
			for(col=4;col<=5;col++){
				printf("*");
			}
		}else{
			for(col=1;col<=1;col++){
				printf("*");
			}
			for(col=2;col<=4;col++){
				printf(" ",col);
			}
			for(col=5;col<=5;col++){
				printf("*");
			}
		}
		printf("\n");
	}
}