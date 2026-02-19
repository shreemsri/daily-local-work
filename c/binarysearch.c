

/* Summary Table:
Case	Time Complexity
Best	O(1)
Average	O(log N)
Worst	O(log N)*/
#include<stdio.h>
int main()
{
	int arr[]={2,4,5,16,20,35,39,87,91,101};
	int n=sizeof(arr)/sizeof(arr[0]);
	int mid,l=0,r=n-1;
	int element=5;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(arr[mid]==element)
		{
			printf("Element at location %d",mid);
			break;
		}
		if(element>arr[mid])
		l=mid+1;
		else
		r=mid-1;
	}
	if(l>r)
	printf("Element not present");
	
}