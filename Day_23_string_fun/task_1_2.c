#include<stdio.h>
#include<string.h>

main(){
	
	char n[100];
	
	printf("Enter a string = ");
 	gets(n);
	
	strlwr(n);
	printf("String in lowercase = %s",strlwr(n));
	
 
}
