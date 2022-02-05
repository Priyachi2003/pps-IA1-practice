#include<stdio.h>
int input()
{
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  return a;
  else if(b>c)
  return c;
  else
  return b;
}
void output(int a,int b,int c,int largest)
{
  printf("%d is largest of %d %d %d",largest,a,b,c);

}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
 largest= cmp(a,b,c);
  output(a,b,c,largest);
  return largest;
  
}