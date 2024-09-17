#include<stdio.h>
int main()
{
	float eng,phy,chem,math,comp;
	float total,average,percentage;
	
	printf("enter marks of five subjects: \n");
	scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);
	total=eng+phy+chem+math+comp;
	average=total/5;
	percentage=(total/500)*100;
	printf("total marks = %.2f\n",total);
	printf("Average marks = %.2f\n",average);
	printf("percentage= %.2f",percentage);
	 return 0;
}
