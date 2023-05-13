#include<stdio.h>
main(){
	
	int *file,j;
	int name=123;
	
	
	
	file=fopen("demo.txt","w");
	
	if(file == NULL){
		printf("file Not found");
	}else{
		printf("File Open Successfully.");
		
	
		fputs(name,file);
	fclose(file);
	}
}