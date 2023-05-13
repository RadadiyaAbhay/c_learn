#include <stdio.h>
#include <string.h>

main(){
    char n[100];
    int i;

    printf("Enter a string = ");
    gets(n);

    for(i=0; n[i]!=NULL; i++){
        if(n[i] >= 'a' && n[i] <= 'z'){
            n[i] = n[i] - 32;
        }else if(n[i] >= 'A' && n[i] <= 'Z'){
            n[i] = n[i] + 32;
        }
    }

    printf("Toggle case string = %s", n);

}
