#include<stdio.h>
void main()
{
FILE *tr;

tr = fopen("fi.txt", "w");
char str[20];
fprintf("Enter the name");

printf("%s",str);

fclose(tr); 
}
