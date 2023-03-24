#include <stdio.h>

main() {
   int N,a=1,sum=1;
   
	printf("Enter N value =");
	scanf("%d",&N);
	
	do{
		sum*=a;
		a++;
	}while(a<=N);
	
	
	printf("%d",sum);
}
