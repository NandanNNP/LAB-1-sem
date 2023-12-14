#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	if(i%2==0)
		continue;
	printf("%d\n",i);	
	}
	
}
