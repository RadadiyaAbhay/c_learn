#include <stdio.h>

main() {
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num !=0) {
        count++;
        num /= 10;
    }
    
    printf("The number of digits in the given number is = %d", count);
}
