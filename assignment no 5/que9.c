#include<stdio.h>
int binary_search(int arr[],int size,int target){
	int low=0;
	int high=size-1;
	while(low<=high){
		int mid=low + (high-low)/2;
		if(arr[mid]==target){
			return mid;
		}else if(arr[mid]<target)
		{
			low=mid+1;
		}else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int array[]={11,34,56,77,87,66,33,78,65};
	int size=sizeof(array)/sizeof(array[0]);
	int target=77;
	int index=binary_search(array,size,target);
	if(index!=-1){
		printf("elements %d found at index %d\n",target,index);
	}else
	{
		printf("elelments %d not found in the array \n",target);
	}
	return 0;
}
