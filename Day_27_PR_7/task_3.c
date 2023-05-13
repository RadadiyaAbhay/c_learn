#include <stdio.h>

int str_Le(char* a) {
    int len = 0;
    while (*a != NULL) {
        len++;
        a++;
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
