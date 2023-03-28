#include<stdio.h>
main(){
	
	int a=1,b,sum=0;
	
	scanf("%d",&b);
	
	do{
		sum +=a;
		a++;
	}while(a<=b);
	
	printf("%d",sum);
}