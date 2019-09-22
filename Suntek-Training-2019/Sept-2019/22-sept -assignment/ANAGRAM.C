#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int l,l1,l2,i,j,f=0,nf=0;
	clrscr();
	printf("enter 1st string: ");
	gets(s1);
	printf("enter 2nd string: ");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
		l=l1;
		for(i=0;i<l;i++)
		{
			f=0;
			for(j=0;j<l;j++)
			{
				if(s1[i]==s2[j])
				{
					f=1;
					break;
				}
			}
			if(f==0)
			{
				nf=1;
				break;
			}
		}
		if(nf==1)
		printf("\nStrings are not Anagram");
		else
		printf("\nStrings are anagram");
	}
	else
	printf("Strings are not Anagram");
	getch();
	return 0;
}