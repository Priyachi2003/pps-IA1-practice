#include<stdio.h>
int input_array_size()
{
  int k;
  printf("enter values to add\n");
  scanf("%d",&k);
  return k;
}
void input_array(int n,int *a)
{
  printf("enter the values\n");
  {
  for(int i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
}
}
}

int sum_n_arrays(int n,int a[n])
{
  int sum,i;
  sum=0;
   for( i=0;i<n;i++)
   {
   sum=sum+a[i];
   }
   return sum;
   }
   void out_put(int n,int a[n],int sum)
   {
     int i;
     for( i=0;i<n-1;i++)
      {
        printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1],sum);
   }
   int main()
   {
     int n,sum;
      n=input_array_size();
      int a[n];
     sum=sum_n_arrays(n,a);
     out_put(n,a,sum);
     return sum;
   }