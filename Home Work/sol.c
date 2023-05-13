#include <stdio.h>

void search(int arr[], int size, int element) {
    int low = 0, high = size - 1, mid;
	
	printf("\nElement Position is = ");
    while (low <= high) {
        mid = (low + high) / 2;
		
        if (arr[mid] == element) {
            printf("%d", mid);
            return;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
	
    printf("\nElement Not Found");
}	

int main() {
    int arr[100], size, i, element;
	
	printf("Enter size of Array = ");
    scanf("%d", &size);
	
	printf("\nEnter element = ");
    for (i = 0; i < size; i++) {
    	
        scanf("%d", &arr[i]);
    }
	
    scanf("%d", &element);
    search(arr, size, element);
	
    return 0;
}
