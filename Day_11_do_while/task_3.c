#include<stdio.h>
main(){
	int count=1 , N;
	
	printf("Enter N value =");
	scanf("%d",&N);
	
	
	do{
		printf("%d\n",count);
		count++;
	}while(count<=N);
	
}
