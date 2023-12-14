#include<stdio.h>

void search(int a[],int key,int n)
{
	int flag=0;
	for(int j=0;j<n;j++)
		{
			if(a[j]==key)
			{
				printf("key %d found at loaction %d\n",key,j);
				flag=1;			
				break;
			}
			
		}
	if (flag==0)
		printf("Key not found\n");

}


int main()
{	
	int n,a[50],key;
	printf("enter the number of element in array :  ");
	scanf("%d",&n);

	if(n>50)
		printf("array is full !! only 50 elements are allowed\n");
	else
	{
		printf("enter the numbers : ");
		for(int i=0;i<n;i++)
			{
			scanf("%d",&a[i]);	
			}
		printf("Entered array is : \t");
		for(int i=0;i<n;i++) //printg array
			{
			printf("%d\t",a[i]);	
			}
		printf("\nEnter the element do you want search : ");
		scanf("%d",&key);

		search(a,key,n);   //searching array using function
		
			
	}
}

