#include<stdio.h>
main(){
	float a,b,c,d,e,f,g;
	
	printf("Enter Physics Marks out of 100 = ");
	scanf("%f",&a);
	
	printf("Enter Chemistry Marks out of 100 = ");
	scanf("%f",&b);
	
	printf("Enter Biology Marks out of 100 = ");
	scanf("%f",&c);
	
	printf("Enter Mathematics Marks out of 100 = ");
	scanf("%f",&d);
	
	printf("Enter Computer Marks out of 100 = ");
	scanf("%f",&e);
	
	f=a+b+c+d+e;
	g=(f*100)/500;
	
	printf("\nYour Total = %f\n\n",f); 
	printf("Your percentage = %f\n\n",g); 
	
	if(a<=40){
	   printf("Your Result = Fail");
	}else if(b<=40){
	   printf("Your Result = Fail");
	}else if(c<=40){
	   printf("Your Result = Fail");
	}else if(d<=40){
	   printf("Your Result = Fail");
	}else if(e<=40){
	   printf("Your Result = Fail");
	}else if(g>=90){
	   printf("Your Result = Grade A\n");
	}else if(g>=80){
	   printf("Your Result = Grade B\n");
	}else if(g>=70){
	   printf("Your Result = Grade C\n");
	}else if(g>=60){
	   printf("Your Result = Grade D\n");
	}else if(g>=50){
	   printf("Your Result = Grade E\n");
	}else if(g>=40){
	   printf("Your Result = Grade F\n");
	}else{
	   printf("Your Result = Fail");
	}
	
	
}