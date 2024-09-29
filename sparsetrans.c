#include<stdio.h>
void transpose(int a[30][3])
{
    int trans[30][3],v;
   v=a[0][2];
   for(int i=0;i<=v;i++) 
   {
    trans[i][0]=a[i][1];
    trans[i][1]=a[i][0];
    trans[i][2]=a[i][2];
   } 
   printf("the transpose is:\n");
   printf("rows coloumns values\n");
   for(int i=0;i<=v;i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",trans[i][j]);
    }
    printf("\n");
   }
}
void main()
{
    int a[30][3],r;
    printf("enter the rows of matrix");
    scanf("%d",&r);
    printf("enter the matrix");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    transpose(a);
}