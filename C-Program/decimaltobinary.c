//gcc decimaltobinary.c -lm
#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp=0,rem,i=0;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	while(1) //while(n!=0)
	{
		if(n==0)
		{
			break;		
		}	
		rem = n % 2;
		n/=2;
		temp+=rem * pow(10,i);
		//printf("%d\n",temp);
		i++;
	}
	printf("%d",temp);
}
