#include<stdio.h>
#include<string.h>

main(){
	char n[100] ,t[100];
	
	printf("Enter a string = ");
 	gets(n);
 	
	strcpy(t,n);
	puts(n);
	strrev(t);
	if(strcmp(n,t)==0){
		printf("\nstring is palindrome");
	}else{
		printf("\nstring is not palindrome");
	}
	
		                      
}
 