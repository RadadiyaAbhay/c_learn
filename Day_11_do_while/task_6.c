#include<stdio.h>
main(){
	int N,count=1;
	
	printf("Enter N value =");
	scanf("%d",&N);
	
	do{
		printf("%d\n",N);
		N-=2;
	}while(count<=N);
	
}