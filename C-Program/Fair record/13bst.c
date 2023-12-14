#include<stdio.h>
#include <stdlib.h>
struct bstnode
{
	struct bstnode *lchild;
	int key;
	struct bstnode *rchild;
};
struct bstnode *root=NULL;

void insert(int item)
{
	struct bstnode *newnode;
	struct bstnode *ptr=root,*ptr1 = NULL;
	int flag = 0;

	newnode = (struct bstnode *)malloc(sizeof(struct bstnode));
	newnode->lchild = NULL;
	newnode->key = item;
	newnode->rchild = NULL;
	while ((ptr !=NULL) && (flag==0))
	{
		if (item < ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->lchild;
		}
		else if (item > ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->rchild;
		}
		else
		{
			flag = 1;
			printf("Failed \n");
		}
	}

	if (root==NULL)
		root = newnode;
	else 
	{	
		if(flag!=1)
		{
			if(item < ptr1->key)
				ptr1->lchild = newnode;
			else
				ptr1->rchild = newnode;		
		}
	}
}


void inorder(struct bstnode *ptr)					//Traversal
{

	if(ptr != NULL)
	{
	
	inorder(ptr->lchild);
	printf("%d\t",ptr->key);
	inorder(ptr->rchild);
	
	}
}

void search(int item)  								//Search
{
	struct bstnode *ptr = root;
	int flag = 0;
	
	while ((ptr !=NULL) && (flag==0))
	{
		if (item < ptr->key)
		{
			
			ptr = ptr->lchild;
		}
		else if (item > ptr->key)
		{
			ptr = ptr->rchild;
		}
		else
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("\n Key found \n");
	}
	else
	{
		printf("\n Key not found \n");
	}
}



struct bstnode * minimum(struct node *ptr)
{
     while(ptr->lchild != NULL)
          ptr=ptr->lchild;

     return(ptr);
}

struct bstnode * successor(struct node*ptr)
{
     if(ptr->rchild!=NULL)
          return(minimum(ptr->rchild));
     return(ptr);

}


void delete(int item)
{
	struct bstnode *ptr=root,*ptr1 = NULL;
	int flag = 0;
	while ((ptr !=NULL) && (flag==0))
	{
		if (item < ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->lchild;
		}
		else if (item > ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->rchild;
		}
		else
		{
			flag = 1;
			
		}
	}

	if((ptr->lchild == NULL) && (ptr->rchild==NULL))
     {
          if(ptr== ptr1->lchild)
               
                    ptr1->lchild=NULL;
          else
               ptr->rchild=NULL;

          free(ptr);
     }
      else if((ptr->lchild != NULL) && (ptr->rchild != NULL))   //case 3 :- 2 child nodes
     {
  		  int temp;
		  struct bstnode *succr;
		  succr = successor(ptr); 
		  temp = succr->key;
		  delete(temp);
		  ptr->key =temp;
     }
     else 											////case 2 :- 1 child node
     {
     	int temp;
     	if(ptr->rchild !=NULL)
  		{
      		temp=ptr->rchild->key;
      		delete(temp);
      		ptr->key=temp;
      	}
      	else
      	{
      		temp=ptr->lchild->key;
      		delete(temp);
      		ptr->key=temp;
      	}
     }
}


int main()
{
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(5);

	inorder(root);

	search(6);
	search(3);

	delete(6);
	inorder(root);
}


