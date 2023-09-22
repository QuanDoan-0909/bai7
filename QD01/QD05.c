//
// Created by doanv on 9/22/2023.
//
#include <stdio.h>
//main()
int q5()
{
    int x;
    x = 0;
    printf("enter choice (1-3):");
    scanf("%d",&x);
    if(x==1)
    printf("\nchoice is 1");
    else if (x==2)
    printf("choice is 2");
    else if (x==3)
    printf("choice is 3");
    else
        printf("\ninvalid choice : invalid choice");

}