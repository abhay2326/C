#include<stdio.h>
#include<conio.h>
void series(int a,int n,int i)
{
	if(i<n)
	{
	printf("%d\n",a);
	series(a+2,n,i+1);
	}
}
main()
{
	int n,i=1,a=1;
	printf("Enter any term of the series ");
	scanf("%d",&n);
	series(a,n,i);
	getch();
}

