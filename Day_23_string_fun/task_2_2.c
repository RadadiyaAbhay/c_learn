#include<stdio.h>
#include<string.h>

main(){
	
	char n[100];
	
	printf("Enter a string = ");
 	gets(n);
	
	strupr(n);
	printf("String in uppercase = %s",strupr(n));
	
 
}
