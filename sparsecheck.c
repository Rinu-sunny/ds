#include<stdio.h>
int sparsecheck(int a[30][30],int row,int col)
{
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==0)
            
                count++;
            
        }
    }
    if(count>=(row*col)/2)
    return 1;
    else 
    return 0;
}
float sparsity(int a[30][30],int row,int col)
{
    int count=0;
for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]!=0)
            
                count++;
            
        }
    }
   float x= (float)(100*count)/(row*col);  
   return x;

} 

void main()
{
    int r,c,a[30][30];
    printf("enter the rows of matrix");
    scanf("%d",&r);
    printf("enter the coloumns of matrix");
    scanf("%d",&c);
    printf("enter the matrix to be checked");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(sparsecheck(a,r,c)==1)
    {
       printf("the matrix is a sparse matrix\n");
       printf("the sparsity is %.2f",sparsity(a,r,c));
       
    }
    else
    printf("the matrix is not a sparse matrix");
}