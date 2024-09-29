#include<stdio.h>
void sparserep(int a[30][30],int r,int c)
{
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(a[i][j]!=0)
           
            count++;
           
        }
    }
    int tup[count+1][3];
    tup[0][0]=r;
    tup[0][1]=c;
    tup[0][2]=count;
    int k=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
           if(a[i][j]!=0)
           {
                
                tup[k][0]=i;
                tup[k][1]=j;
                tup[k][2]=a[i][j];
                k++;
           }
           
           

        }
    }
 printf("the tuple representation is:\n");
 printf("rows\tcols\tvalues\n");
 for (int i=0;i<=count;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",tup[i][j]);
    }
    printf("\n");
  }
 
}

void main()
{
    int row,cols,a[30][30];
    printf("enter the rows of the matrix");
    scanf("%d",&row);
    printf("enter the coloumn of matrix");
    scanf("%d",&cols);
    printf("enter the matrix");
   
 for(int i=0;i<row;i++)
{
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}
sparserep(a,row,cols);
}