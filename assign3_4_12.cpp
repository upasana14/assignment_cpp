#include<stdio.h>
int main()
{
	int per;
	while(1)
	{
		printf("enter your percentage:");
		scanf("%d",&per);
		if((per>=0)&&(per<=56))
		{
			printf("grade is 0.0\n0");
		}
		else if((per>=57)&&(per<=61))
		{
			printf("grade is 1.0\n");
		}
		else if((per>=62)&&(per<=66))
		{
			printf("grade is 1.5\n");
		}
		else if((per>=67)&&(per<=71))
		{
			printf("grade is 2.0\n");
		}
		else if((per>=72)&&(per<=77))
		{
			printf("grade is 2.5\n");
		}
		else if((per>=78)&&(per<=86))
		{
			printf("grade is 3.0\n");
		}
		else if((per>=87)&&(per<=91))
		{
			printf("grade is 3.5\n");
		}
		else if((per>=92)&&(per<=100))
		{
			printf("grade is 4.0\n");
			break;
		}	
	}
	return 0;
}
