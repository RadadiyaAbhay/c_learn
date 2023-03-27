#include <stdio.h>

main() {
   int N,a=1,sum=0;
   
	printf("Enter N value =");
	scanf("%d",&N);
	
	for(a=1;a<=N;a++){
		sum+=a;
	};
	
	printf("%d",sum);
}
