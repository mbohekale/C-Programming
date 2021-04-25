#include<stdio.h>
#include <stdlib.h>
#include <cs50.h>


int main(void)
{
    int n = get_int(" n: ");
    int m = get_int(" m:");
    if(n<m)
    {
        printf("n is greater than m\n");
    }
    else 
    {
    printf("n is less than m\n");
    }
  
}
