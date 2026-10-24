/*
name: Joseph Muiga wachira
reg no: CT100/30672/26
date:23/10/26
description: Calculating electric bill 
*/

#include<stdio.h>
//function prototype
float calculateFare(float distance);

int main(){
	float distance, fare;
	
	printf("Enter distance traveled in Km:\t");
	scanf("%f",&distance);
	
//function call
fare=calculateFare(distance);

printf("distance is %.2f\n",distance);
printf("fare is %.2f\n",fare);

return 0;
}

//function definition
float calculateFare(float distance){
	float fare;
	fare=distance*50.0;
	
return fare;
}