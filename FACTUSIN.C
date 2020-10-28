/*Write a C programme to find the factorial of a given number using recursive functions.*/

   //Factorial using recursion//      //Date:26-11-2015//
   	

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
/*
Output:
Enter a number:
7
The factorial of 7 is 5040
*/