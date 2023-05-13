#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int i,j;
	
	for(i=1-n;i<n;i++){
		for(j=1-n;j<n;j++){
			if(abs(i)>abs(j)){
				printf("%2d",abs(i)+1);
			}else{
				printf("%2d",abs(j)+1);
			}
		}
		printf("\n");
	}
}
