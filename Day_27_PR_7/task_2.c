#include <stdio.h>


int sum_el(int array[], int x){
    int i, sum = 0;

    for(i=0; i<x; i++){
        sum += array[i];
    }

    return sum;
}

int main()
{
    int x, i, y;

    printf("Enter number of elements = ");
    scanf("%d", &x);

    int array[x];

    for (i=0; i<x; i++){
        printf("Enter Value %d = ", i);
        scanf("%d", &array[i]);
    }

    y = sum_el(array, x);

    printf("\nThe sum of all array elements is = %d\n", y);

}