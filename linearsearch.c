#include<stdio.h>
int linearsearch(int a[30],int num,int n)
{  

    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
           return i;
        }
    }
    
        return -1;
    
}
void main()
{
    int n,value,a[30];
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value to be searched");
    scanf("%d",&value);
  
    if(linearsearch(a,value,n)==-1)
    {
        printf("the value is not found");
    }
    else 
    printf("the value is found at index %d",linearsearch(a,value,n));
}