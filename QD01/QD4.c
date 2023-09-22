//
// Created by doanv on 9/22/2023.
//
#include <stdio.h>
//void main ()
int q4()
{
    char c;
    printf("please enter a character");
    scanf("$c",&c);
    if(c>='A' && c<='Z')
        printf("loworcase character = %c",c+'a'-'A');
    else
        printf("character entered is  =%c",c);

}