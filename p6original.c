#include <stdio.h>
void input_string(char *a)
{
  printf("enter the string:");
  scanf("%s",a);
}
int str_reverse(char *string, char *substring)
{
  int count=0;
  for(int i=0;i<'\0';i++)
    {
      count++;
    }
  
}
void output(char *string, char *substring, int index)
{
  printf("the index of %s of %s is %d",substring ,string,index);
}
int main()
{
  char a,b,c;
  int d;
  input_string(&a);
  d=str_reverse(&b,&c);
  output(&b,&c,d);
  return 0;
}
