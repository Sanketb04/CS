#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
FILE* fd= fopen("sleep.txt","r");



if(fd==NULL)
{
perror("Error in opening File!!!!!!");
        }
else
{
printf("File %s is created",fd);
}
sleep(15);

fclose(fd);




}

