#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd = open("A1Q2.txt",O_RDONLY | O_CREAT);
if(fd == -1)
{
	printf("FILE  not created......\n");
	return 1;

}
printf("\nSleeping before Terminating.... ");
if (fd==1)
{
	sleep(15);
}
close(fd);
printf("\nACTIVE");
printf("\n");
return 0;
}
