#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{
	int key,j,comparison=0,write=0;
	for(int i=0;i<n;i++)
	{
		key=arr[i];
		for(j=i-1;j>=0;j--)
		{
			comparison++;
			if(key<arr[j])
			{
				arr[j+1]=arr[j];
				write++;
			}
			else
				break;
		}
		if((j+1)!=i)
		{
			arr[j+1]=key;
			write++;
		}
	}
	cout<<"Sorted array: "<<endl;
	for(int x=0;x<n;x++)
	{
		cout<<arr[x]<<" ";
	}
	cout<<endl;
	cout<<"Comparison: "<<comparison<<endl;
	cout<<"Write operations: "<<write<<endl;
}
int main()
{
	int n;
	cout<<"enter length of array: ";
	cin>>n;
	int arr[n];
	cout<<"enter numbers: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion_sort(arr,n);
}
