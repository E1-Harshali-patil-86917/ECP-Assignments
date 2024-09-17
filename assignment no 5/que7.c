#include<stdio.h>
void bubble_sort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		int swapped=0;
		for(int j=0;j<size-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
					swapped=1;
				}
		}
		if(!swapped)
		{
			break;
		}
	}
}
void print_array(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arry[]={3,5,6,7,11};
	int size[]=sizeof(array)/sizeof(array[0]);
	printf("original array:\n");
	print_array(array,size);
	bubble_sort(array,size);
	printf("sorted array using bubble sort:\n");
	print_array(array,size);
	return 0;
}

