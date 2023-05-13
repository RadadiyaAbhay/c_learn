#include<stdio.h>
main(){
	
	int *file;
	char data[]="Hello Abhay .  ";
	
	file=fopen("demo.txt","w");
	
	if(file == NULL){
		printf("file Not found");
	}else{
		printf("File Open Successfully.\n");
		
		fputs(data,file);
	fclose(file);
	}
}