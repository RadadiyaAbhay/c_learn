#include<stdio.h>
main(){
	
	int a[5] = {6,2,3,9,5};
	int *p[5],i;
		
	
	for(i=0;i<5;i++){
		p[i] = &a[i];
		printf("%u = %d\n",p[i], *p[i]);
	}
	
}