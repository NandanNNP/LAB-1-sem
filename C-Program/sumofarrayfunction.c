#include<stdio.h>



int add(int newAry[50],int n)
{
	int sum;
	for(int j=0;j<n;j++)
		{
		sum+=newAry[j];	
		}
	return sum;

}



int main()
{	
	int n,a[50],sum=0;
	printf("enter the number of element in array :  ");
	scanf("%d",&n);
	printf("enter the numbers : ");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);	
		}
	printf("The sum is : %d\n",add(a,n));
	
}

