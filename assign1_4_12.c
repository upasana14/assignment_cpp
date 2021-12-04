#include<stdio.h>

int main()
{
	int n1=2,n2=4;
	swap(&n1,&n2);
	printf("n1 is %d and n2 is %d",n1,n2);
	return 0;
}
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	
}
