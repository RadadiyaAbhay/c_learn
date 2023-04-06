#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

main() 
{
    int row,col,a=1,b=0;
    
    scanf("%d",&a);
    b=(a*2)-1;
    
    for(row=1;row<=b;row++){
        for(col=1;col<=b;col++){
            printf("%d",a);
        }
        printf("\n");
    }
    
   
    return 0;
}