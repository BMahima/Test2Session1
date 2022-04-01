#include <stdio.h>
#include <math.h>
struct _point {
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("enter the coordinates of p:");
  scanf("%f %f",&p.x,&p.y);
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l,float *distance)
{
  float g,h;
  g=pow((l->p1.x - l->p2.x),2);
  h=pow((l->p1.y - l->p2.y),2);
  *distance=sqrt(g+h);
}
void output(Line l,float distance)
{
  printf("the length of the line is %f",distance);
}
int main()
{
  Line l;
  float distance;
  l=input_line();
  find_length(&l,&distance);
  output(l,distance);
  return 0;
}


