#include<stdio.h>

main(){
	int i;
	char n[100];
	
	printf("Enter a string = ");
 	gets(n);
	
	printf("String in lowercase =");
	for(i=0;n[i] != NULL;i++){
		printf("%c",n[i]+32);
		                      
	}
		                      
}
 