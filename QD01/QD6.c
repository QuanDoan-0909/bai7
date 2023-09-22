//
// Created by doanv on 9/22/2023.
//
#include <stdio.h>
//void main()
int q6()
{
    int x,y;
    x=y=0;
    printf("enter choice (1-3):");
    scanf("%d",&x);
    if(x==1)
    {
        printf("\n enter vlue for is y(1-5):");
        scanf("%d",y);
        if(y<=5)
            printf("\nthe value  for y is:%d",y);
        else
            printf("\nthe volue  of y  exceeds 5");
    } else
        printf("\nchoice entered was not 1");
}