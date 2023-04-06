#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum,first,second,third,fourth,five,four,t,th,sec,se,s,fir,fi,f;
    scanf("%d", &n);
    
    first=(n/10);
    fir=(first/10);
    fi=(fir/10);
    f=(fi/10);
    s=(se%10);
    second=(n/10);
    sec=(second/10);
    se=(sec/10);
    s=(se%10);
    third=(n/10);
    th=(third/10);
    t=(th%10);
    fourth=(n/10);
    four=fourth%10;
    five=n%10;
 
    sum=f+s+t+four+five;
    printf("%d",sum);
    return 0;
}