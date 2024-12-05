#include<stdio.h>
#include<dirent.h>
#include<unistd.h>

int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
	printf("Size of Current Directory :%d\n",sizeof(dir));
   int res=sizeof(dir->d_name);
    if (d)
    {
	 printf("\tFile name  \t  Size \t\n ");
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s \t %d\t\n ", dir->d_name,res);
        }
	
        closedir(d);
    }
    return(0);
}
