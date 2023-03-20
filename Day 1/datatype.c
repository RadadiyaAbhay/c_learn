#include<stdio.h>
main(){
	// int=%i %d, char=%c, float=%f
	
	int x = 99;
	int y = 5;
	int sum = x+y;
	float div = x/y;
	float min =x-y;
	float mul = x*y;
	float per =x%y;
	char ab='a';
	
	printf("Total sum is(+)=%i\n",sum);
	printf("div is(/)=%.2f\n",div);
	printf("min is(-)=%.2f\n",min);
	printf("mul is(*)=%.2f\n",mul);
	printf("per is(%)=%.2f\n",per);
	printf("%c\n",ab);
}