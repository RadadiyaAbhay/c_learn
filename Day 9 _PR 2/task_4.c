#include<stdio.h>
 main(){
	
	char a ;
	
	printf("Enter character of Day Name = ");
	scanf("%s",&a);
	
	
	switch(a){
		case 'S':
			printf("Sunday");
			break;
		
		case 'M':
			printf("Monday");
			break;
		
		case 'T':
			printf("Tuesday");
			break;
		
		case 'W':
			printf("Wednesday");
			break;
		
		case 'TH':
			printf("Thursday");
			break;
		
		case 'F':
			printf("Friday");
			break;
			
		case 'SA':
			printf("Saturday");
			break;
		
		default:
			printf("Enter vaild First character of Day Name in capital");
			break;
	}
}