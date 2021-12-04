#include<stdio.h>
int triangle();
int	Rhombus();
int parallelogram();
int main()
{
	triangle();
	Rhombus();
	parallelogram();
}
triangle()
{
	int h,b,area;
	printf("enter a height and breath:\n");
	scanf("%d %d",&h,&b);
	area=0.5*(h*b);
	printf("area of triangle is %d\n",area);
}
Rhombus()
{
	int d1,d2,area;
	printf("enter value of d1 and d2:\n");
	scanf("%d %d",&d1,&d2);
	area=0.5*(d1*d2);
	printf("area of rhombus is %d",area);
	
}
parallelogram()
{
	int l,b,area;
	printf("enter value of l and b:\n");
	scanf("%d %d",&l,&b);
	area=0.5*(l*b);
	printf("area of parallelogram is %d",area);
	
}
