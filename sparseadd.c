#include<stdio.h>

void addTuples(int tup1 [30][3], int tup2[30][3]) 
{
    int sum[30][3];
    int count1 = tup1[0][2];
    int count2 = tup2[0][2];

    
    int i = 1, j = 1, k = 1; 

    sum[0][0] = tup1[0][0];
    sum[0][1] = tup1[0][1];  
    sum[0][2] = 0;         

    while (i <= count1 && j <= count2) {
        if (tup1[i][0] == tup2[j][0] && tup1[i][1] == tup2[j][1]) {
            
            sum[k][0] = tup1[i][0];
            sum[k][1] = tup1[i][1];
            sum[k][2] = tup1[i][2] + tup2[j][2];
            k++;
            sum[0][2]++; 
            i++;
            j++;
        } else if (tup1[i][0] < tup2[j][0] || 
                   (tup1[i][0] == tup2[j][0] && tup1[i][1] < tup2[j][1])) {
            
            sum[k][0] = tup1[i][0];
            sum[k][1] = tup1[i][1];
            sum[k][2] = tup1[i][2];
            k++;
            sum[0][2]++;
            i++;
        } else {
            
            sum[k][0] = tup2[j][0];
            sum[k][1] = tup2[j][1];
            sum[k][2] = tup2[j][2];
            k++;
            sum[0][2]++;
            j++;
        }
    }

    
    while (i <= count1) {
        sum[k][0] = tup1[i][0];
        sum[k][1] = tup1[i][1];
        sum[k][2] = tup1[i][2];
        k++;
        sum[0][2]++;
        i++;
    }

    
    while (j <= count2) {
        sum[k][0] = tup2[j][0];
        sum[k][1] = tup2[j][1];
        sum[k][2] = tup2[j][2];
        k++;
        sum[0][2]++;
        j++;
    }
 printf("the sum of the tuple is:\n");
 printf("rows coloumns values\n");   
 for(int i=0;i<=sum[0][2];i++)
 {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
 }

}

void main() {
    
    int s,r,a[30][3],b[30][3];
  printf("enter the number of rows in the tuple 1");
  scanf("%d",&r);
  printf("enter the tuple 1");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("enter the number of rows in the tuple 1");
  scanf("%d",&s);
  printf("enter the tuple 1");
  for(int i=0;i<s;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
    addTuples(a,b);
   
}