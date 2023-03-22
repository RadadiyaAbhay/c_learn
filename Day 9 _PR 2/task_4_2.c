#include<stdio.h>
main(){
	
    char a[2];
	
	printf("Enter character of Day Name = ");
	scanf("%s",&a);
	
	switch(a[0]){
		case 'M':
			printf("Monday");
			break;
		
		case 'T':
			if(a[1] == 'u'){
			printf("Tuesday");
			}else if (a[1] == 'h'){
			printf("Thursday");
			}else{
			printf("Enter vaild First character of Day Name in capital");	
			}
			break;
		
		case 'W':
			printf("Wednesday");
			break;

		case 'F':
			printf("Friday");
			break;
			
		case 'S':
			if(a[1] == 'a'){
			printf("Saturday");
			}else if (a[1] == 'u'){
			printf("Sunday");
			}else{
			printf("Enter vaild First character of Day Name in capital");	
			}
			break;
		
		default:
			printf("Enter vaild First character of Day Name in capital");
			break;
	}
}