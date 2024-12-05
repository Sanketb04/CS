#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
void sigstop()
{
printf(" Suspended\n");
}
void sigcont()
{
printf(" Its Back\n");
}
void sigint()
{
printf(" resuming\n");
exit(0);
}
int main(int argc, char **argv){
printf("Starting the program\n");
signal(SIGTSTP,sigstop);
signal(SIGCONT,sigcont);
signal(SIGINT, sigint);
while(1)
{
sleep(2);
}
return 0;
}
