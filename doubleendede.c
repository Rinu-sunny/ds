#include<stdio.h>
#define MAX 10
#include<stdlib.h>
int front=-1;
int rear=-1,q[MAX] ;
void insertfront(int num)
{
    if(front==0)
    {
        printf("the queue is full");

    }
    else if(front==-1&& rear==-1)
    {
        front=rear=0;
        q[front]=num;
        printf("%d is inserted at front",q[front]);
    }
    else
    {
        front=front-1;
        q[front]=num;
        printf("%d is inserted at front",q[front]);
    }
    
}
void insertatback(int num)
{
    if(rear==MAX-1)
    {
        printf("the queue is full");
    }
     else if(front==-1&& rear==-1)
    {
        front=rear=0;
        q[rear]=num;
        printf("%d is inserted at rear",q[rear]);
    }
    else{
        rear=rear+1;
        q[rear]=num;
        printf("%d is inserted at rear",q[rear]);
    }

}
void removefromfront()
{
    if(front==-1)
    {
        printf("the queue is empty");
    }
    else if(rear==front)
    {
        int temp=q[front];
        rear=front=-1;
        printf("%d is removed from front",q[front]);
    }
    else
    {
        int temp=q[front];
        printf("%d is removed from front",q[front]);
        front=front+1;  
    }
}
void removefromback()
{
    if(rear==-1)
    {
        printf("the queue is empty"); 
    }
     else if(rear==front)
    {
        int temp=q[rear];
        rear=front=-1;
        printf("%d is removed from back",q[rear]);
    }
     else
    {
        int temp=q[rear];
        printf("%d is removed from back",q[rear]);
        rear=rear-1;
    }
}
void peekatfront()
{
    if(front==-1)
    {
        printf("the queue is empty");
    }
    else
    {
        printf("%d is the topmost element",q[front]);
    }
}
void peekatback()
{
    if(rear==-1)
    {
        printf("the queue is empty");
    }
    else
    {
        printf("%d is the last element",q[rear]);
    }
}
void display()
{
    if(front==-1)
    {
      printf("the queue is empty");
    }
    else
    {
        printf("the elements are:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",q[i]);
        }
    }
}
void main()
{
    int ch,num;
    while(1)
    {
        printf("\nchooose from menu\n1.insert element from front\n2.insert element from back\n3.remove element from front\n4.remove element from back\n5.peek from front\n6.peek front back\n7.display\n8.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
               printf("enter the element to be entered at front");
               scanf("%d",&num);
               insertfront(num);
               break;
            }
            case 2:
            {
               printf("enter the element to be entered at back");
               scanf("%d",&num);
               insertatback(num);
               break ;
            }
            case 3:
            {
              removefromfront();
              break;
            }
            case 4:
            {
                removefromback();
                break;
            }
            case 5:
            {
                peekatfront();
                break;
            }
            case 6:
            {
                peekatback();
                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 8:
            {
                exit(1);
                break;
            }
            default:printf("wrong choice");
        }
    }

}