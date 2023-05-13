#include<stdio.h>
main(){
	
	int *file;
	char data[1000];
	
	file=fopen("demo.txt","r");
	
	if(file == NULL){
		printf("file Not found");
	}else{
		printf("File Open Successfully.\n");
		
		while(fgets(data,10,file)!= NULL){
			printf("%s",data);
		}
		fclose(file);
	}
	
}