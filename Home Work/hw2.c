#include<stdio.h>
#include<math.h>
main(){
	float a, b, h, x, y, r;
	
//	scanf("%f",&b);
//	scanf("%f",&r);
//	scanf("%f",&a);
//	h=(a*(b/100)*r);
//	
//	printf("%0.2f",h);
 
    scanf("%f",&a);
    scanf("%f",&b);
    x = 2;
    h=(a*a)+(b*b)+(x*(a)*(b));
    r=(a+b)*((a*a)-(a*b)+(b*b));
    
    printf("(a+b)2 = %f\n",h);
    printf("a3+b3 = %f",r);
}