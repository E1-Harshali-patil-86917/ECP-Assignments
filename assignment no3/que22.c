#include<stdio.h>
int main()
{
	int i,j;
	int row=4;
	
	for(i = row ; i >= 1 ; i--)
	{
		for(j = i ; j >= 1 ; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}	
