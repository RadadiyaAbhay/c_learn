#include<stdio.h>
#include<math.h>
main(){
   float a,b,c,d,e,f,g,ans,res;
   
//   printf("Write a Taxable Amount = ");
//   scanf("%f", &a);
//   printf("Write a Gst Rate = ");
//   scanf("%f", &b);
//   
//   c = 100;
//   d = (a*b)/c;
//   ans = a+((a*b)/c);
//   
//   printf("Total Tax Amount = %f\n", d);
//   printf("Total Amount = %f", ans);



    printf("Write triangle side = ");
    scanf("%f", &a);
    printf("Write triangle side = ");
    scanf("%f", &b);
   
    
    ans = ((a*a)+(b*b));
    res = sqrt(ans);
    
    printf("Total hypotenuse = %f",res );
}