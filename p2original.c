#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three numbers");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  printf("A is big \n");
  else if((b>a)&&(b>c))
  printf("B is big \n");
else
printf("C is big \n");
return 0;
}