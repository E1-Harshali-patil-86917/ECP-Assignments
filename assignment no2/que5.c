#include<stdio.h>
int main()
{
	int a,b,c;
	a=12,b=34,c=40;
	if(a>b && a>c){
		printf("%d",a);
	}
	else if(b>c){
		printf("%d",b);
	}
	else{
		printf("%d",c);
	}

return 0;
}
