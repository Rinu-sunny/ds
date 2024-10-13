#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int num)
{
  if(top==MAX-1)
  {
    printf("stack overflow");
  }
  else
  {
    top=top+1;
    stack[top]=num;
    printf("%d pushed into stack",num);
  }
}
int pop()
{
    if(top==-1)
    {
        
        return -1;
    }
    else
    {
        int temp=stack[top];
        top=top-1;
        return temp;
    }
}
int peak()
{
    if(top==-1)
    {
        
        return -1;
    }
    else
    {
        return stack[top];
    }
}
int isempty()
{
    if(top==-1)
    return 1;
    else return 0;
}
void display()
{
    if(top==-1)
    {
        printf("the stack is empty.no element exists");
    }
    else
    { 
        printf("the elements in stack are:\n");
        for(int i=top;i>-1;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void main()
{
    int ch,num;
    while(1){
        printf("choose frome menu\n1.push\n2.pop\n3.display\n4.isempty\n5.peak\n6.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            {
               printf("enter the element to be pushed on to stack");
               scanf("%d",&num);
               push(num);
               break;
            }
            case 2:
            {
                int p=pop();
                if(p==-1)
                {
                    printf("stack underflow");
                }
                else
                {
                    printf("%d is poped from stack",p);
                }
                break;
            }
            case 3:
            {
               display();
               break;
            }
            case 4:
            {
                if(isempty()==1)
                printf("the stack is empty");
                else 
                printf("the stack is not empty");
                break;
            }
            case 5:
            {
                if(peak()==-1)
                {
                    printf("the stack is empty");
                }
                else
                {
                    printf("the top element of the stack is:%d",peak());
                }
                break;
            }
            case 6:{
                exit(1);
                break;
            }

            default:printf("wrong choice");
        }
    }
}
