#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    printf("Hello Enter your name: ");
    gets(name);
    printf("My name is %s\n",name);
    return 0;
}
