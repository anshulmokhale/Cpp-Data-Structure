#include<iostream>
using namespace std;
void sorting(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
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
int BinarySearch(int arr[],int size,int val)
{
	int s,e,mid;
	s=0;
	e=size;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(arr[mid]==val)
		{
			return mid+1;
		}
		else if(arr[mid]>val)
		{
			e=mid-1;
		}
		else{
			s=mid +1;
		}
	}
	return 0;
}
int main()
{
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the value of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int val;
	cout<<"enter the value you want to search"<<endl;
	cin>>val;
	sorting(arr,n);
	int res=BinarySearch(arr,n,val);
	if(res==0)
	{
		cout<<"the value is not present in the list"<<endl;
	}
	else{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		cout<<"the list is at "<<res<<" position"<<endl;
	}
return 0;	
}