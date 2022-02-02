#include <stdio.h>
int input_array_size()
{
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter array number\n");
  for(i=1;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrar(int n,int a[n])
{
  int i,sum=0;
  {
    sum=sum+a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  printf("is %d",sum);
}
int main()
{ 
  int n,a[10],sum,i;
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrar(n,a);
  output(n,a,sum);
  return 0;
}