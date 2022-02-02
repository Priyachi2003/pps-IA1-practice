#include<stdio.h>
int input()
{
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  return 0;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
   return a;
   else if(b>c)
   return b;
   else
   return c;
}
void output(int a,int b,int c,int largest)
{
  printf("%d is largest of all three",largest);

}
int main()
{
  int a,b,c,largest;
  input(a,b,c);
  cmp(a,b,c);
  output(a,b,c,largest);
  return largest;
}