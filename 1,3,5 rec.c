#include<stdio.h>
#include<conio.h>
void series(int n,int i)
{
	if(i<=2*n-1)
	{
		printf("\n%d",i);
		series(n,i=2+i);
		
	}
}
main()
{
	int n,i=1;
	printf("Enter any number ");
	scanf("%d",&n);
	series(n,i);
	getch();
}
