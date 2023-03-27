#include <stdio.h>

main() {
   int N,a=1,sum;
   
	printf("Enter N value =");
	scanf("%d",&N);
	
	for(a=1;a<=10;a++){
		sum=(N*a);
		printf("%d * %d = %d\n",N,a,sum);
		
	}
	
}
