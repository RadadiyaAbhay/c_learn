#include<stdio.h>
struct bill{
	int bill_no;
	char party_name[100];
	float taxable_amount;
	
}b[100];
main(){
	int i,n=1;
	printf("Enter Your Total Bill = ");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("Enter Your Bill no. = ");
		scanf("%d",&b[i].bill_no);
		printf("Enter Your Party Name = ");
		scanf("%s",&b[i].party_name);
		printf("Enter Your Taxable Amount = ");
		scanf("%f",&b[i].taxable_amount);
		printf("\n");				
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("Bill no. = %d\nParty Name = %s\nTaxable Amount = %0.2f\n\n",b[i].bill_no,b[i].party_name,b[i].taxable_amount);
	}
}