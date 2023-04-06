#include<stdio.h>
main(){
	int n,i;
	
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array[n],max,min;
	
	for(i=0;i<n;i++){
		printf("Enter value of %i =",i);
		scanf("%d",&array[i]);
	}
	max = array[0];
    min = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
}