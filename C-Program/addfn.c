/*#include<stdio.h>
int ad	d();
int main()
{
	printf("the number is %d\n",add());
	
}

int add()
	{
		int a,b,c;
		printf("enter the numbers : ");
		scanf("%d%d",&a,&b);
		c=a+b;
		return(c);
	}*/

//----------- Argument passing ------------

#include<stdio.h>
int add(int a,int b);
int main()
{	
	int a,b;
	printf("enter the numbers : ");
	scanf("%d%d",&a,&b);
	printf("the number is %d\n",add(a,b));
	
}

int add(int a,int b)
	{
		int c;
		
		c=a+b;
		return(c);
	}
