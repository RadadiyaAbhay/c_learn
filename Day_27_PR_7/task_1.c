#include<stdio.h>
int fac(int a){
	
	if(a<1){
		return 1;
	}else{
		return a*fac(a-1);
	}
	
}
main(){
	int k, a;
	printf("Enter Number =");
	scanf("%d",&a);
	
	k=fac(a);
	printf("factorial of number = %d",k);
	
	
}