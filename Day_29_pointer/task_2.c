#include<stdio.h>
main(){
	
	int a[5] = {1,5,3,2,9};
	int *p,i;
	p = &a;
	
	for(i=0; i<=4; i++){
	
		printf("%u = %d\n", p+i, *(p+i));
		
	}
}