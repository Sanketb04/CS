#include<stdio.h>
#include<stdlib.h>
void first(void)
{
	printf("Hellloooo,");
	}
	void second(void){
   printf("This is ARSHIYA.");
	}
int main(){
	atexit(second);
	atexit(first);
	return 0;
}

