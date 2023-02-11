#include<iostream>
using namespace std;
void sorting(int arr[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
int main()
{
	int n;
	cout<<"enter the value for size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the value in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sorting(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}