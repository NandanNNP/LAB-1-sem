#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char alphabet[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

char s1[26];
char s2[26];
int bs1[26],bs2[26],c1[26],c2[26];
int k,l,m;
void getele()
{
	char h;
	printf("Enter the maximum number of element in set1(26)");
	scanf("%d",&l);
	for(k=0;k<l;k++)
		{
		scanf("%s",&h);
		s1[k]=toupper(h);
		}
	printf("Enter the maximum number of element in set2(26)");
	scanf("%d",&m);
	for(k=0;k<m;k++)
		{
		scanf("%s",&h);
		s2[k]=toupper(h);
		}
		
	bit(s1,l);
	bit(s2,m);

}
void bit(char bs,int n)
{
	for(int i=0;i<26;i++)
		bs[n]
}

int main()
{	
	int i,choice;
	getele();
	
	
	
}
