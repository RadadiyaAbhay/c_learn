#include <stdio.h>

int str_Le(char k[100]) {
    int len = 0,i=0;
    while (k[i] != NULL) {
        len++;
        k++;
    }
    return len;
}

main(){
    char a[100];
    
    printf("Enter a string = ");
    scanf("%s",&a);
    
    int len = str_Le(a);
    printf("Length of the string is = %d\n", len);
}
