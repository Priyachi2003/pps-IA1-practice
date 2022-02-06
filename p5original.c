#include<stdio.h>
float input()
{
  float k;
  printf("enter the number\n");
  scanf("%f",&k);
  return k;
}
float my_sqrt(float n)
{
  float temp,sqrt;
  sqrt=n/2;
  temp=0;
  while(sqrt!=temp)
  {
  temp=sqrt;
  sqrt=(n/temp+temp)/2;
  }
  return temp;
}
void output(float n,float sqrt_result)
{
  printf("sqrt of %f is %f",n,sqrt_result);
}
int main()
{
 float sqrt,n;
 n=input();
 sqrt=my_sqrt(n);
 output(n,sqrt);
 return 0;
}