/*
name: Joseph muiga wachira
refno: CT100/G/30672/26
date:16/10/2026
description: waterbills calculations
*/

#include <stdio.h>

int main(){
  int units;
  float bill;

printf("water units consumed:\t");
scanf("%d",&units);

if(units>=30){
bill=units*20;
}
else if(units>=31 && units<=60){
  bill=units*25;
}
else if(units>60){
  bill=units*30;
}

printf("bill is ksh%.2f",bill);

return 0;
}
