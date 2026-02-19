

#include<stdio.h>
int main()
{
	int arr[]={65,32,44,11,22,49};
	//int arr[]={11,22,32,44,49,65};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,temp,min_indx,swapped=0;
	
	//Check Whether array is already sorted
	if(n==0||n==1)
	return 1;
	for(i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i])
		swapped=1;
	}
	if(swapped==0)
	{
	printf("Array already sorted");
	return 1;	
	}
	// Array not sorted	
	printf("Array Before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
		
	for(i=0;i<n-1;i++)
	{
	min_indx=i;
	for(j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min_indx])
		min_indx=j;
		
	}
	if(min_indx!=i)
	{
		temp=arr[min_indx];
		arr[min_indx]=arr[i];
		arr[i]=temp;
	}
	}
	
	
	printf("\n\nArray after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}