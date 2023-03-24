#include <stdio.h>

main() {
   int N,a=1,sum;
   
	printf("Enter N value =");
	scanf("%d",&N);
	
	while(a<=10){
	
		sum=(N*a);
		printf("%d * %d = %d\n",N,a,sum);
		a++;
	}
	
}
