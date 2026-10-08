
#include<stdio.h>
#include<conio.h>

void push()
{
    if(top==max-1)
    printf("stack overflow \n");
    printf("enter an element");
    scanf("%d",&value);
    a[+top]=value;
    int pop(){
        if(top=-1)
        printf("underflow cannot pop \n);
            return -1;
            return(top--1);
    }
