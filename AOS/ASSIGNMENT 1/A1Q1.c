#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int fd=open("file_hole.txt",O_WRONLY | O_CREAT, 0666);
iIfd,data,strlenf(fd==-1)
{
perror("Error in opening File!!!!!!");
return 1;
	}
lseek(fd,1024,SEEK_SET);
const char* data= "The Entered DATA is After  the HOle is Created.\n";
write(fd,data,Strlen(data));

close(fd);
	
return(0);


}
