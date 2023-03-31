#include <stdio.h>

main() {
	long long num;
    int count = 0;
    
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    while (num !=0) {
        count++;
        num /= 10;
    }
    
    printf("The number of digits in the given number is = %d", count);
}
