#include<stdio.h>



void modifyAry(int newAry[5],int index,int num)
{
	newAry[index]=num;

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
	for(int j=0;j<n;j++)
		{
		printf("%d\t",a[j]);	
		}

		modifyAry(a,2,100);
		printf("\n");
		
	for(int j=0;j<n;j++)
		{
		printf("%d\t",a[j]);	
		}
	
}

