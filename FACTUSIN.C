#include<stdio.h>
long int FACT(long int );
void main()
{
	long int n,f;
	clrscr();
	printf("Enter a number:\n");
	scanf("%ld",&n);
	f=FACT(n);
	printf("The factorial of %ld is %ld",n,f);
	getch();
}
long int FACT(long int n)
{
	long int i,p=1;
	if(n==0)
	return 1;
	else
	return (n*FACT(n-1));
}
