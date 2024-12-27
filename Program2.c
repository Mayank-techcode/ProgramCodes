// Problem Statement : Accept 2 numbers from user and perform its addition.

#include<stdio.h>

int main()
{
    int i, j, k ;
    
    printf("Enter first number: \n");
    scanf("%d",&i);

    printf("Enter Second number: \n");
    scanf("%d",&j);

    k = i + j ;

    printf("Addtion of two numbers is: %d ",k);

    return 0;
}