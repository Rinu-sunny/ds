#include<stdio.h>
struct poly
{
  float coeff;
  int degree;
} p1[10],p2[10],sum[20];
void readpoly(struct poly p[30],int t)
{  
    
    printf("enter the degree in decending order ");
    for(int i=0;i<t;i++)
    {
        scanf("%d", &p[i].degree);
    }
    printf("enter the corresponding coefficients");
    for(int i=0;i<t;i++)
    {
        scanf("%f",&p[i].coeff);
    }
}
void printpoly(struct poly q[30],int n)
{
   
    for (int i = 0; i <n; i++) 
    {
        if (q[i].degree == -1)
         break;
        if (i > 0 && q[i].coeff >= 0) {
            printf(" + ");
        }
        printf("%.1fx^%d", q[i].coeff, q[i].degree);
    }
    printf("\n");
}

void polyadd(struct poly p1[10],struct poly p2[10],struct poly sum[20],int t,int s)
{
    int i=0,j=0,k=0;
   while(i<t&& j<s) 
   {
    if(p1[i].degree==p2[j].degree)
    {
        sum[k].degree=p1[i].degree;
        sum[k].coeff=p1[i].coeff+p2[j].coeff;
        k++;
        i++;
        j++;
    }
    else if(p1[i].degree>p2[j].degree)
    {
        sum[k].degree=p1[i].degree;
        sum[k].coeff=p1[i].coeff;
        k++;
        i++;
    }
    else
    {
        sum[k].degree=p2[i].degree;
        sum[k].coeff=p2[i].coeff;
        k++;
        j++;   
    }
   }
   while(i<t)
   {
     sum[k].degree=p1[i].degree;
        sum[k].coeff=p1[i].coeff;
        k++;
        i++;
    }
    while(j<s)
   {
     sum[k].degree=p2[j].degree;
        sum[k].coeff=p2[j].coeff;
        k++;
        j++;
    }
    sum[k].degree=-1;
    printf("the resultant is:");
    printpoly(sum,k);

}

void main()
{    
    int t,s;
     printf("enter the number of terms in the polynomial 1");
    scanf("%d",&t);
     printf("enter the number of terms in the polynomial 2");
    scanf("%d",&s);
    readpoly(p1,t);
    readpoly(p2,s);
    printf("the polynomial 1 is:");;
    printpoly(p1,t);
    printf("the polynomial 2 is:");
    printpoly(p2,s);
    polyadd(p1,p2,sum,t,s);
}