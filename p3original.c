#include <stdio.h>
int input_number()
{
  int n;
  printf("enter the value of n: \n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        return 0;
      }
    }
  return 1;
}
void output(int n,int isprime)
{
  if (isprime)
  {
    printf("%d is  prime \n",n);
  }
  else
  {
    printf("%d is not prime \n",n);
  }
}
int main()
{
  int n,b;
  n=input_number();
  b=is_prime(n);
  output(n,b);
  return 0;
}