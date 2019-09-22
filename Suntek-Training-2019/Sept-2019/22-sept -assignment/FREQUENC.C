#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20];
	int i,j,c=0,d[26]={0};
	char x;
	clrscr();
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(d[s[i]-'a']==1)
		continue;
		for(j=i;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
			 c++;
			 d[s[i]-'a']=1;
			 }
		 }
		 printf("%c : %d\n",s[i],c);
		 c=0;

	}
	getch();
}




