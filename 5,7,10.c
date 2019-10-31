#include<stdio.h>
#include<conio.h>
void series(int n)
{
	int a=5,i;
	for(i=0;i<=n;i++)
	{
    printf("\n%d\n",a);
    a=a+3;
	}
}
main()
{
	int n;
	printf("Enter any term of series : ");
	scanf("%d",&n);
	series(n);
	getch();
}
