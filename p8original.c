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
struct _polygon {
int n;
Line l[100];
float perimeter;
};
typedef struct _polygon Polygon;
int input_n()
{
  int n;
  printf("enter the number of sides of polygon:");
  scanf("%d",&n);
  return n;
}
Line input_line()
{
  Line l;
  printf("enter the coordinates of the line:");
  scanf("%f %f",&l.p1.x,&l.p1.y);
  printf("enter the coordinates of line:");
  scanf("%f %f",&l.p2.x,&l.p2.y);
  return l;
}
void input_polygon( int n, Polygon *p)
{
  int i;
  p->n=n;
  for (i=0;i<n;i++)
    {
      p->l[i]=input_line();
    }
}
float find_distance(Point p1,Point p2)
{
  return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
void find_length(Line *l)
{
  l->distance=find_distance(l->p1,l->p2);
}
void find_perimeter(Polygon *p)
{
  int i;
  p->perimeter=0;
  for(i=0;i<p->n;i++)
  {
    find_length(&p->l[i]);
    p->perimeter += p->l[i].distance;
  }
 
}
void output(Polygon p)
{
  printf("THE PERIMETER OF POLYGON IS %f \n",p.perimeter);
}

int main()
  {
    Polygon p;
    input_polygon(input_n(),&p);
    find_perimeter(&p);  
    output(p);
    return 0;    
  }

