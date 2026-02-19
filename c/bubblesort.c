

#include<stdio.h>
#include<stdbool.h>
int main()
{
	//int arr[]={34,25,16,45,76,109,11};
	int arr[]={11,16,25,34,45,76,109};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,temp;
	bool swap;
	printf("Array before sorting : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		swap=false;
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			swap=true;	
			}
		}
		if(swap==false)
		break;
	}
	printf("\nArray after sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}	
	return 0;
}