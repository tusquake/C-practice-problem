#include<stdio.h>

void binarysearch(int arr[],int low,int high,int key)
{
	int mid;
	if(low<=high)
	{
		mid=(low+(high-low))/2;
		if(key==arr[mid])
		{
			printf("Number found in array at %d position",mid);
		}
		else if(key<arr[mid])
		{
			high=mid-1;
			binarysearch(arr,low,high,key);
		}
		else if(key>arr[mid])
		{
			low=mid+1;
			binarysearch(arr,low,high,key);
		}
	}
	else
	{
		printf("Number not found");
	}
	
}
int main()
{
	int n,i,arr[25],key;
	printf("Enter the no. of numbers : ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	printf("Enter the number u want to search : ");
	scanf("%d",&key);
	binarysearch(arr,0,n-1,key);
	return 0;
}