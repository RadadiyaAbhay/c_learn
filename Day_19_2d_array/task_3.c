#include<stdio.h>
main(){
	int i,j,arr[5][4];
	
	arr[0][0]=1;
	arr[0][1]=2;
	arr[0][2]=3;
	arr[0][3]=4;
	arr[1][0]=5;
	arr[1][1]=6;
	arr[1][2]=7;
	arr[1][3]=8;
	arr[2][0]=9;
	arr[2][1]=10;
	arr[2][2]=11;
	arr[2][3]=12;
	arr[3][0]=13;
	arr[3][1]=14;
	arr[3][2]=15;
	arr[3][3]=16;
	arr[4][0]=17;
	arr[4][1]=18;
	arr[4][2]=19;
	arr[4][3]=20;
	
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}