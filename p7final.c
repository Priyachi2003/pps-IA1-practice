#include<stdio.h>
struct _complex
{
  float real,imaginary;

};

typedef struct _complex complex;


void input(complex *c1,complex *c2)
{
  printf("enter two complex numbers\n");
  scanf("%f %f",&c1->real,&c1->imaginary);
  scanf("%f %f",&c2->real,&c2->imaginary);
}
complex add_complex(complex c1,complex c2)
{
  complex sum;
  sum.real=c1.real+c1.imaginary;
  sum.imaginary=c2.real+c2.imaginary;
  return sum;
}
void output(complex c1,complex c2,complex sum)
{
  printf("(%f+i%f),(%f+i%f),(%f+i%f)\n",c1.real,c1.imaginary,c2.real,c2.imaginary,sum.real,sum.imaginary);
}
int main()
{
  complex c1,c2,sum;
  input(&c1,&c2);
  sum=add_complex(c1,c2);
  output(c1,c2,sum);
  return 0;
}