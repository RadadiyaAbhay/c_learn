#include<stdio.h>
main(){
	int a=2;
	int *c=&a;
	
	printf("%p\n",c);
	printf("%u\n",c);
	printf("%x\n",c);
	printf("%d",*c);
}