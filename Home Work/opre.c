#include<stdio.h>
main(){
	
	float a,b,c,d,e,f,g,h,i,j,k,m;
	a=9;
	b=10;
	m=50;
	
	c= a>b ;
	d= a<b ;
	e= a==b;
	f= a>=b;
	g= a<=b;
	h= a!=b;
//	i= --b;
	j=(a>b && a<b);
	k=!(a>b||a<b);
	m-=a;//m =m-a
	
	printf("%f\n", c);
	printf("%f\n", d);
	printf("%f\n", e);
	printf("%f\n", f);
	printf("%f\n", g);
	printf("%f\n", h);
    printf("%f\n", i);
    printf("%f\n", j);
    printf("%f\n", k);
    printf("%f\n", m);
}