#include<stdio.h>
float input()
{
  float k;
  printf("enter the number\n");
  scanf("%f",&k);
}
float my_sqrt(float n)
{
  float sqrt; 
  float a=n/2;
  float a2=n;
  while(a2!=n)
  {
    a2=n;
    a=n+1/2;
  }
  return a;
}
void output(float n,float sqrt_result)
{
  printf("sqrt of %f is %f",n,sqrt_result);
}
int main()
{
  float n,sqrt;
  n=input();
   sqrt=my_sqrt(n);
  output( n, sqrt);
  return 0;
}