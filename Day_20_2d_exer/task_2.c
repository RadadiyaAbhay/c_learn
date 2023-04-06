#include <stdio.h>

main() {
    int arr[][4] = {{1,2,3,5}, {4,5,5,6}, {7,5,8,9},{7,5,5,6},{4,3,5,3},{3,4,5,5}};
    int rows = sizeof(arr) / sizeof(arr[0]);    
    int cols = sizeof(arr[0]) / sizeof(int);  
    
    printf("Number of rows: %d\n", rows);
    printf("Number of columns: %d\n", cols);

}