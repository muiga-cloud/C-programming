/*
name: Joseph Muiga wachira
reg no: CT100/30672/26
date:23/10/26
description: Calculating electric bill 
*/


#include<stdio.h>

//function prototype
float calculateElectricBill(float unit);

 int main() {
 	   float unit,bill;
 	    
        printf("Enter  unit consumed:\t");
         scanf("%f" ,&unit);
         
  // function call
  bill= calculateElectricBill(unit);
  
         printf("unit consumed is %.2f\n" ,unit);
         printf("bill is %.2f\n",bill);
         
return 0;
 }

//function definition
float calculateElectricBill(float unit){
	float bill;

if(unit<=100){
	bill=unit*10;
}
else if(unit>100 && unit<=200){
	bill=(100*10)+(unit-100)*15;
}
else if(unit>200){
	bill=(100*10)+(100*15)+(unit-200)*20 ;
}
return bill;
}