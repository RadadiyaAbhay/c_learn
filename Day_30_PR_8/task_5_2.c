#include <stdio.h>

mul(int a, int b, int c, int *sum, int *product){
    *sum = a + b + c;
    *product = a * b * c;
}

main() {
    int a = 2, b = 3, c = 4, sum, product;

    mul(a, b, c, &sum, &product);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

}