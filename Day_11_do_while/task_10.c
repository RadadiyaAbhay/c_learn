#include <stdio.h>

main() {
   int N,a=1,sum;
   
	printf("Enter N value =");
	scanf("%d",&N);
	
	do{
		sum=(N*a);
		printf("%d * %d = %d\n",N,a,sum);
		a++;
	}while(a<=10);
	
}
