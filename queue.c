#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int front=-1, rear=-1,q[MAX];
void enqueue(int num)
{
   if(rear==MAX-1)
   {
    printf("queue is full");
   }
   else if(front==-1)
   {
     rear=front=0;
     q[rear]=num;
     printf("the enqueued element is %d",q[rear]);
     
   }
   else
   {
     rear=rear+1;
     q[rear]=num;
     printf("the enqueued element is %d",q[rear]);

   }
}
void dequeue()
{
    if(front==-1)
    {
        printf("the queue is empty");
    }
    else if(rear==front)
    {
        int temp=q[front];
        rear=front=-1;
        printf("%d is dequeued",temp);
       

    }
    else
    {
      int temp=q[front];
      front=front+1;
      printf("%d is dequeued",temp);
    }
}
void peek()
{
    if(front==-1)
    {
        printf("the queue is empty");

    }
    else
    {
        printf("the element in the front is%d",q[front]);
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
    printf("the current queue is\n");
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
        printf("\nchoose from menu\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("enter the number to be enqueued");
                scanf("%d",&num);
                enqueue(num);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                exit(1);
                break;
            }
            default:printf("wrong choice");

        }
    }
}