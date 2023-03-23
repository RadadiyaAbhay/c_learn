#include <stdio.h>

main() {
   int N,a=1,sum=1;
   
	printf("Enter N value =");
	scanf("%d",&N);
	
	while(a<=N){
		sum*=a;
		a++;
	}
	printf("%d",sum);
}
