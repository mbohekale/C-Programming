#include<stdio.h>
#include <stdlib.h>
#include <cs50.h>


int main(void)
{
    int n = get_int(" n: ");
    if(n%2==0)
    {
    printf("Even number %i\n", n );
    }
    else 
    {
    printf("Odd number %i\n", n);
    }