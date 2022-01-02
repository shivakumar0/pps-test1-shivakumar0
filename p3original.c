#include<stdio.h>
void input(int*a,int*b)
{
  printf("enter numbers\n");
  scanf("%d%d",a,b);
}
  void add(inta,intb,int*sum)
{
  *sum=a+b;
}
void output(inta,intb,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
}
int main()
{
int a,b,sum;
input(&a,&b);
add(a,b,&sum);
output(a,b,sum);
return 0;

}
























