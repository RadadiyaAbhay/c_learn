#include<stdio.h>
main(){
	int first,last,sum,user,s=0;
	
	printf("Enter any number = ");
	scanf("%d",&user);
	
	first=user;
	while(first>= 10){
		first /= 10;
		s=first;
	}
		last = user % 10;
		sum=s+last;
	printf("sum of first and last digit of a number = %d",sum);
}