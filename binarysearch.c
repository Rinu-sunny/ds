#include<stdio.h>
/*int binarysearch(int a[],int length,int value)
{   
   int low=0; 
   int high=length-1;
   while(low<=high)
   {
    int mid=(low+high)/2;
    if(a[mid]==value)
    {
        return mid;
    }
     if(value>a[mid])
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
   }
   return -1;
}*/
int binarysearch(int a[],int low,int high,int value)
{   
    
    if(low>high)
    {
      return -1;
    }

         int mid=(low+high)/2;
        if(a[mid]==value)
        {
            return mid;
        }
        else if(a[mid]<value)
        {
            binarysearch(a,low,mid+1,value);
        }
        else
        {
            binarysearch(a,mid-1,high,value);
        }
    
    

}
void main()
{   
    int value,n,a[30];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the array elements");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the value to be found");
    scanf("%d",&value);
    if(binarysearch(a,0,n,value)==-1)
     printf("element not found");
     else printf("element is found at index %d",binarysearch(a,0,n,value));
}