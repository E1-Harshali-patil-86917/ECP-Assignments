#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d * %d=%d\n",i,n,(i*n));
		i++;
	}
	return 0;
}
