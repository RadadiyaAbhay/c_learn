#include<stdio.h>
div(int n){

	int a, b, sum, sub, mul, div;
	int choice;

	printf("enter a value :-");
	scanf("%d",&a);

	printf("enter b value :-");
	scanf("%d",&b);

	printf("sum of 1, sub of 2, mul of 3, div of 4 :-");
	scanf("%d",&choice);

	switch(choice){

	case 1:
		sum = a + b;
		printf("sum of %d and %d = %d",a,b,sum);
		break;

	case 2:
		sub = a - b;
		printf("sub of %d and %d = %d",a,b,sub);
		break;

	case 3:
		mul = a * b;
		printf("mul of %d and %d = %d",a,b,mul);
		break;

	case 4:
		div = a / b;
		printf("div of %d and %d = %d",a,b,div);
		break;

	default:
		printf("plz enter no of between a to d");
		break;
	}
}

int main(){
	
	int num;
    	div(num);
}


