#include<stdio.h>
main(){
    int a,i=1,sum;
    
    scanf("%d",&a);
    
    do{
    	sum=a*i;
    	printf("%d * %d = %d\n",a,i,sum);
    	i++;
	}while(i<=10);
}