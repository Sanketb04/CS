#include <unistd.h>
#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
int flag =0;
void sigintHandler(int sig_num)
{
if(flag==1)
exit(0);
{
signal(SIGINT,sigintHandler);
printf("\n ctrl+c");
printf("Signal Accomplised!!!!!");
flag = 1;
//clear the output buffer and move the buffered data to console
fflush(stdout);

}
}
int main()
{
signal (SIGINT,sigintHandler);
while(1){
}
return 0;
}
