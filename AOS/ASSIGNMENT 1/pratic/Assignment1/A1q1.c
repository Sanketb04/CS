#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
FILE* fd= fopen("hole.txt","w");



if(fd==NULL)
{
perror("Error in opening File!!!!!!");
	}
else
{
printf("File %s is Created",fd);
}
 fprintf(fd,"Hello Welcome");

fseek(fd,25,0);
 fprintf(fd,"The Entered DATA is After  the HOle is Created.\n");


fclose(fd);
	



}
