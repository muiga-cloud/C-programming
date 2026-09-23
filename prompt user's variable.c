/*
Name : Joseph Muiga Wachira
Reg no: CT100/G/30672/26
Date   : 23rd September
Description: prompt c variable, for my details
*/

#include<stdio.h>

int main(){
  
   //declare variables
  float height;  //%f
  double bankbalance;  //%lf
  char phonenumber[11];  //%d
  
  printf("enter your height in centimeters: \t ");
  scanf("%f", &height);
  
  printf("enter bank balance in kSh: \t");
  scanf("%lf", &bankbalance);
   
  printf("enter phone number: \t ");
  scanf("%10s", phonenumber);
  
  printf("height is %1f \n", height);
  printf("bank balance %2lf \n", bankbalance);
  printf("phone number %s \n", phonenumber);

return 0;
}