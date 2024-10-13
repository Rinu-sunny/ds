#include<stdio.h>
void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
    printf("the sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int a[30],n;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
}