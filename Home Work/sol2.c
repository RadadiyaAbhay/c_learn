#include <stdio.h>

void search(int arr[], int size, int element) {
    int low=0, high =size-1, mid,i;
    
    for(i=0;i<size;i++){
    	mid=(low+high)/2;
 	    printf("%d",mid);
    
  	  if(arr[mid]==element){
   	 	printf("Yes");
		}else if(arr[mid]<element){
			
		}	
	}
    
    
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
