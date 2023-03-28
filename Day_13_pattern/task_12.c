#include<stdio.h>
main(){
	int col,row;
	
	for(row=5;row>=1;row--){
		for(col=row;col>=1;col--){
			printf("%d",row);
		}
		printf("\n");
	}
}