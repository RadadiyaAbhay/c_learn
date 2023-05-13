#include<stdio.h>

main(){
	int i,j=0;
	char n[100];
	
	printf("Enter a string = ");
 	gets(n);
	
	printf("string length = ");
	for(i=0;n[i] != NULL;i++){
		j++;
		                      
	}
	printf("%d",j);	                      
}
 