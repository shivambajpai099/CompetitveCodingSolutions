#include <iostream>
using namespace std;

int main() {
	//code
	int test,n,i,max;
	cin>>test;
	while(test--)
	{
	 cin>>n;
	 int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	int start,end,mid,max;
	
	start = 0; 
	end = n-1;
	while(start<end)
	{
		mid = (start+end)/2;
		if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
		{	max= arr[mid];
			break;
		}

		else if( arr[mid]>arr[mid+1] )
			end =mid;
		else
			start = mid;
	
	}

	cout<<max<<endl;

}
	return 0;
}
