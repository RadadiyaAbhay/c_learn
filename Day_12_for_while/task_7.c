#include<stdio.h>
main(){
	int count=2000 , userv;
	
	printf("Enter Year 2000 to 3000 : ");
	scanf("%i",&userv);
	
	if(userv>=2000){
		if(userv<=3000){
		for(count=count;count<userv;count+=4){
		
		}
		
			if(userv==count){
				printf("This is Leap Year\n");
			}else{
				printf("This is Not Leap Year\n");
			}
		}else{
			printf("This is Not Valid Year\n");
		}
	}else{
		printf("This is Not Valid Year\n");
		
	}
	
	
	
}