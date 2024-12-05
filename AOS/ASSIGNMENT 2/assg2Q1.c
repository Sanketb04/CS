#include<stdio.h>
 void main(){
int bal,deposit,withdraw,emi;
float ci;
char op;
printf("\n BANKING SYSTEM");
printf("\n-------------------");
printf("\nD ->Deposit.");
printf("\nW ->Withdraw.");
printf("\nB ->Balance.");
printf("\nE ->EMI.");	
printf("\nI ->Interest.");
printf("\nQ ->QUIT.");
printf("\nEnter an operation:");
scanf("%c",&op);

switch(op){
case 'D':
printf("\n Enter Deposit amt:");
scanf("%d",&deposit);
bal= bal+deposit;

break; 
case 'W':
printf("\n Enter the amt to be withdrawn:");
scanf("%d",&withdraw);
bal=bal-withdraw;
if(bal<withdraw){
printf("\nInsufficient balance to withdraw..System going to SLEEP....");
sleep(2);
}
else { printf("Withdrawn amt %d ",&withdraw);}
break;
case 'B':
printf("\nBalance: %d",bal);
break;
case 'E':
printf("Enter the EMI amt to be paid :");
scanf("%d",&emi);
bal=bal-emi;
if(bal<emi){
printf("\nInsufficient Balance To pay EMI...System going to sleep");
sleep(10);
}
else{("EMI PAID AMT %d",&emi);}
break;
case 'I':
ci=(float)bal*4/100;
bal=bal+ci;
printf("\nInterest : %f",ci);
break;
case 'Q':
return;
default:
printf("\nInvalid Operation...");
}
}

