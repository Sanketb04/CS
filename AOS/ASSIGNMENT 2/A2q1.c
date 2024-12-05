#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h> 
#define NUM_THREADS 3
#define Initial_Bal 1000

int bal = Initial_Bal ;
sem_t withdraw_sem,deposit_sem,emi_sem;

void* deposit(void* arg)
{
int deposit_amt=*(int*) arg;
sem_wait(&deposit_sem);
bal=bal + deposit_amt;
printf("Deposit: %d,New Balance:%d\n",deposit_amt,bal);
sem_post(&emi_sem);
sem_post(&withdraw_sem);
return NULL;
}

void*  emi(void* arg)
{
int emi_amt= *(int*)arg;
sem_wait(&emi_sem);
if(bal<emi_amt)
{
printf("EMI :Insufficient balance. Going to sleep..\n");
sem_post(&emi_sem);
return NULL;
}
bal=bal-emi_amt;
printf("EMI: Deducted:%d,New Balance:%d\n",emi_amt,bal);
sem_post(&emi_sem);
return NULL;
}

void* withdraw(void* arg)
{
int withdraw_amt = withdraw_amt =*(int*)arg;
sem_wait(&withdraw_sem);
if(bal<withdraw_amt)
{
printf("\nWithdraw Amount Insufficient...");
printf("\nGoing to Sleep....");
sem_post(&withdraw_sem);
return NULL;
}
bal = bal - withdraw_amt;
printf("Withdraw:%d, New Balance:%d\n",withdraw_amt,bal);
sem_post(&emi_sem);
sem_post(&withdraw_sem);
return NULL; 
}

int main()
{
int i;
pthread_t threads[NUM_THREADS];
int deposit_amt=0,emi_amt=0,withdraw_amt=0;
printf("Enter the amt to be deposit:");
scanf("%d",&deposit_amt);
printf("Enter the amt to be withdrawn:");
scanf("%d",&withdraw_amt);
printf("EMI :");
scanf("%d",&emi_amt);

sem_init(&deposit_sem,0,1);
sem_init(&emi_sem,0,0);
sem_init(&withdraw_sem,0,0);
pthread_create(&threads[0],NULL,deposit,&deposit_amt);
pthread_create(&threads[1],NULL,emi,&emi_amt);
pthread_create(&threads[2],NULL,withdraw,&withdraw_amt);

for(i=0;i<NUM_THREADS;i++)
{
pthread_join(threads[i],NULL);
}
sem_destroy(&deposit_sem);
sem_destroy(&emi_sem);
sem_destroy(&withdraw_sem);
return 0;
}
