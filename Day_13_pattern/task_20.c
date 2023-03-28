#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
		  if(row%2==0){	
			if(col%2==1){
				printf("|");
			}else{
				printf("-");
			}
		}else{
			if(col%2==1){
				printf("-");
			}else{
				printf("|");
			}
		}
			
		}
		printf("\n");
		
	}
}