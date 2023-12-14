#include <stdio.h>
#include <stdlib.h>
int main ()
{

	int num=10;
	printf("The value of num is: %d\n",num);
	printf("The address of num is: %p\n",&num);

	int *ptr;
	ptr = &num;
	printf("The value of num is : %d through pointer\n",*ptr);
	printf("The Address of num is : %p through pointer\n\n\n\n",ptr);
	//int *q=50;
	// printf("The value of num is : %d through pointer\n",*q); //not work bcz 50 have no variable 
	// printf("The Address of num is : %p through pointer\n\n\n\n",q);

	int *q;	
	q=(int *)malloc(sizeof(int));
	*q=50;

	printf("The value of num is : %d through pointer\n",*q); //it work bcz 50 have dynamic variable variable 
	printf("The Address of num is : %p through pointer\n\n\n\n",q);




	return(0);

}
