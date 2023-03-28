#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
		  if(row%2==0){	
			if(col%2==1){
				printf("0");
			}else{
				printf("1");
			}
		}else{
			if(col%2==1){
				printf("1");
			}else{
				printf("0");
			}
		}
			
		}
		printf("\n");
		
	}
}