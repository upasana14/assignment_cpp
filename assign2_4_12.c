#include<stdio.h>
#include<math.h>
int add_contact();
int option();
int update_contact();
int menu();
int main()
{
	int a,b,c;
	a=menu();
	c=option();
	switch(c)
	{
		case 1:
			{
				b=add_contact();
				break;
			}
		case 2:
			{
				update_contact();
				break;
			}
		case 3:
		    {
				printf("You Exited");
				break;	
		    }	
	}
	return 0;
}
int menu()
{
	printf("||--------------------------------||\n");
	printf("||      1.Add a Contact           ||\n");     
	printf("||      2.Update a Contact        ||\n");
	printf("||      3.Exit                    ||\n");
	printf("||--------------------------------||\n");
}
int option()
{
	int choice;
	printf("Enter your choice:");
	scanf("%d",&choice);
	return choice;
}
int add_contact()
{
	double number,i=0,t;
	…
