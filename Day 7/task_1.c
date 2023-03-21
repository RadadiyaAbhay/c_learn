#include<stdio.h>
main(){
	 
	int a, b; 
	
	printf("1. Recharge\n");
	printf("2. Balance\n");
	printf("3. Last date\n");
	printf("4. Upcoming plan\n");
	printf("5. Recharge for friend\n\n");
	
	printf("Enter No. = ");
	scanf("%i",&a);
	
	
	switch(a){
		case 1:
			printf("1. RS. 100\n");
			printf("2. RS. 200\n");
			printf("3. RS. 300\n");
			printf("4. RS. 400\n");
			printf("5. RS. 500\n\n");
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf(" 100mb data \n 100 call");
					break;
				case 2:
					printf(" 200mb data \n 200 call");
					break;
				case 3:
					printf(" 300mb data \n 300 call");
					break;
				case 4:
					printf(" 400mb data \n 400 call");
					break;
				case 5:
					printf(" 500mb data \n 500 call");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
		case 2:
			printf("1. Your current balance\n");
			printf("2. Your last 5 calls\n");
			printf("3. Your last 5 sms\n");
			printf("4. Your last 5 mms\n");
			printf("5. Your top-up balance\n\n");
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("100");
					break;
				case 2:
					printf(" 99763 78323\n 78766 97897\n 89876 78866\n 78767 86786\n 78686 56576");
					break;
				case 3:
					printf(" 99763 78323\n 78766 97897\n 89876 78866\n 78767 86786\n 78686 56576");
					break;
				case 4:
					printf(" 99763 78323\n 78766 97897\n 89876 78866\n 78767 86786\n 78686 56576");
					break;
				case 5:
					printf("40");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
		case 3:
			printf("1. Last date for current balance\n");
			printf("2. Last date for top-up balance\n");
			printf("3. Last date for incoming\n");
			printf("4. Last date for outgoing\n\n");
			
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("5-jan-2024");
					break;
				case 2:
					printf("6-jan-2024");
					break;
				case 3:
					printf("7-jan-2024");
					break;
				case 4:
					printf("8-jan-2024");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
		case 4:
			printf("1. Your main upcoming plan\n");
			printf("2. Your top-up upcoming plan\n\n");
			
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("6-jan-2024");
					break;
				case 2:
					printf("7-jan-2024");
					break;
				
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
		case 5:
			printf("1. Recharge plan\n");
			printf("2. Sim no.\n");
			printf("3. Nickname\n");
			printf("4. Again recharge\n");
			
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("Rs. 100");
					break;
				case 2:
					printf("76767 78667");
					break;
				case 3:
					printf("xyz");
					break;
				case 4:
					printf("Rs. 300");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
			break;
		default:
			printf("Plz Enter Vaild no.");
			break;
	}
}