#include <stdio.h>
int input_n()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=0;i<=n;++i)
  {
    sum=sum+i;
  }
 return sum;
}
int output(int n, int sum)
{
  printf("sum=%d",sum);
  return 0;
}
int main()
{
  int a=input_n();
  int b=sum_n(a);
  output(a,b);
  return 0;
}