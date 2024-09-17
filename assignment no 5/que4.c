#include<stdio.h>
int main()
{
	// reverse the  array element

	int arr[5]={1,2,3,4,5};
	int temp,i,j;
	printf("array elements is:");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	 for(i=0,j=4;i<j;i++,j--){
		 temp=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temp;
	 }
	printf("\n reverse array:");
   for(i=0;i<5;i++){
   printf("%d",arr[i]);
   }
return 0;
}

