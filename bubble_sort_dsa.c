#include<stdio.h>
void main()
{
	int i,j,n,temp=0,a[100];
	printf("enter the size of ana array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("before sorting the array elements are:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
	printf("After sorting the array elements are:\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
