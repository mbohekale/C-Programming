#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
	printf("Enter your name:\n");
	gets(name);
	printf("My name is %s\n" , name);
    return 0;
}
