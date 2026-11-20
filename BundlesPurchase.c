/*
name joseph muiga wachira
reg no CT100/G/30672/26
DATE 13/11/2026
DESCRIPTION: calculating salary using the hours worked and wages
*/

#include<stdio.h>
int main()
{
	int choice;
	
	printf("select data bundles:\n");
	printf("1.100mbs @50ksh \n");
	printf("2.500mbs @200ksh \n");
	printf("3.1GB @350ksh\n");
	printf("4.2GB @600ksh\n");

	printf("enter valid choice (1-4):");
	scanf("%d",&choice);
	
	if (choice==1){
		printf("you have selected 100mbs @50ksh\n");
	}
	else if (choice==2){
		printf("youve selected 500mbs @200ksh\n");
	}
	else if (choice==4){
		printf("youve selected 1GB for ksh 350\n");
	}
	else if (choice==4){
		printf("youve selected 2GB for ksh600 \n");
	}
	else{
		printf("INVALID CHOICE");
	}
	
	
	return 0;
}
