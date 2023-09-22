//
// Created by doanv on 9/22/2023.
//
#include <stdio.h>
//void main()
int q3()
{
    int num,res;
    printf("enter a number:");
    scanf("%d",&num);
    res =num %2;
    if(res==0)
        printf("the number is ever");
    else
        printf("the number is odd");
}