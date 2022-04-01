#include <stdio.h>
int input()
{
  int n;
  printf("enter the value of nth number: \n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a=0,b=1,c;
  for(int i=2;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
  return a;
}
void output(int n, int fibo)
{
  printf("the %dth number in fibonacci series is %d \n",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output( n,fibo);
  return 0;
}
