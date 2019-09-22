#include<stdio.h>
#include<conio.h>
int gcdrec(int a,int b)
{
	if(b==0)
	return a;
	return gcdrec(b,a%b);
}
int main()
{
	int n1,n2,i,gcd,gcd1;
	clrscr();
	printf("Enter two integers:");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		gcd=i;
	}
	printf("GCD using iterative Statements : %d\n",gcd);
	gcd1=gcdrec(n1,n2);
	printf("GCD using Recursion : %d ",gcd1);
	getch();
	return 0;
}