#include<stdio.h>
main(){
	
	int a[5] = {6,2,3,9,5};
	int *p[5];
	int i;
	
	p[0] = &a[0];
	p[1] = &a[1];
	p[2] = &a[2];
	p[3] = &a[3];
	p[4] = &a[4];
	
	
	for(i=0;i<5;i++){
		printf("%u = %d\n",p[i], *p[i]);
	}
	
}