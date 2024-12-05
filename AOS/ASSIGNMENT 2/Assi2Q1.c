#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int balance;
int depositAmount;
int emiAmount;
int withdrawAmount;

void depositProcess() 
	{
		sleep(10);
		balance += depositAmount;
		printf("Deposited :%d\n",depositAmount);
	}

void emiProcess() 
	{
		if(balance < emiAmount) {
		printf("Insufficient balance for EMI. Going to sleep.\n");
	}
	else 
	{
		sleep(10);
		balance -= emiAmount;
		printf("Emi paid:$%d\n",emiAmount);
	}
}
void withdrawProcess() 
{
	if(balance < withdrawAmount)
	{
		printf("Insufficient balance for withdraw. Going to sleep\n");
		printf("you need more money in your account ");
	}
	else 
	{
		sleep(10);
		balance -= withdrawAmount;
		printf("Withdraw:$%d\n",withdrawAmount);
	}
}

int main() 
{
	printf("Enter the balance :");
	scanf("%d",&balance);

	printf("Enter the deposit Amount: ");
	scanf("%d",&depositAmount);

	printf("Enter the EMI amount: ");
	scanf("%d",&emiAmount);

	printf("Enter the Withdraw Amount: ");
	scanf("%d",&withdrawAmount);

	pid_t depositPid,emiPid, withdrawPid;

	depositPid = fork();
	if(depositPid == 0) 
	{
		depositProcess();
	}

	emiPid = fork();
	if(emiPid == 0)
	{
		emiProcess();
	}

	withdrawPid = fork();

	if(withdrawPid == 0)	
	{
		withdrawProcess();
	}

	waitpid(depositPid,NULL,0);
	waitpid(emiPid, NULL,0);
	waitpid(withdrawPid,NULL,0);

	printf("Final balance:$%d\n",balance);
return 0;
}




