#include<stdio.h>
#include<ctype.h>
#include<string.h>
void rev(char b[],int n)
{
	int i,j;
	char t;
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		t=b[i];
		b[i]=b[j];
		b[j]=t;
	}
}
void revc(char a[],int n)
{
	int i,j=0;
	char b[10],t;
	for(i=0;i<n;i++)
	{
		if(tolower(a[i])=='a'||tolower(a[i])=='e'||tolower(a[i])=='i'||tolower(a[i])=='o'||tolower(a[i])=='u')
			continue;
		else
		{
			b[j]=a[i];
			j++;
			a[i]='.';
		}
	}
	rev(b,j);	
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]=='.')
		{
		 a[i]=b[j];
		 j++;
		}
	}
}

void main()
{
	char a[20];
	int i=0;
	printf("enter a string:");
	scanf("%s",a);
	revc(a,strlen(a));
	printf("consonants reversed string is:%s",a);
}