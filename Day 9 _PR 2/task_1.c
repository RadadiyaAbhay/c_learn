#include<stdio.h>
main(){
	
	char ab;
	
	 printf("Enter any Character  = ");
	 scanf("%c",&ab);
	 
	if(ab>='a' && ab<='z' || ab>='A' && ab<='Z'){
	 
		printf("Character is Alphabet");
		
    }else if(ab>='0' && ab<='9'){
	   
		printf("Character is Digit");
		
	}else{
	    
		printf("Special Character");
	}
} 
			