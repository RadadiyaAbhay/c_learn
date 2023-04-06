#include <stdio.h>

main() {
    int arr[] = {1, 2, 3, 4, 5, 6,7 }; 
    
    int len = sizeof(arr) / sizeof(arr[3]);  

    printf("The length of the array is %d\n", len);
    
}
