#include<stdio.h>
main(){
	float a,b,c,d,f;
	char e ;
	
	printf("Enter Math Marks =");
	scanf("%f",&a);
	
	printf("Enter Science Marks =");
	scanf("%f",&b);
	
	printf("Enter Gujarati Marks =");
	scanf("%f",&c);

	
	f=a+b+c;
	d=(100*f)/300;
	
	printf("Total = %f\n",f);
	printf("percentage = %f\n",d);
	printf("Grade = %c",e);	
	
	
	if(a<36){
		printf("Fail");
	}else if(b<36){
		printf("Fail");
	}else if(c<36){
		printf("Fail");
	}else if(d>=90){
		printf("A");	
	}else if(d>=80){
		printf("B");
	}else if(d>=70){
		printf("C");
	}else if(d>=60){
		printf("D");
	}else if(d>=50){
		printf("E");
	}else if(d>=40){
		printf("F");
	}else if(d>=36){
		printf("G");
	}else{
		printf("Fail");
	}
}