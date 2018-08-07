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
	    int right[n];
	    right[n-1] = max = -1;
	    for(i=n-2;i>=0;i--)
	    {
	        if(arr[i+1]>max)
	            max = arr[i+1];
	        right[i] = max;
	    }

	  for(i=0;i<n;i++)
		cout<<right[i]<<" ";
	
		cout<<endl;    
	    
	}
	return 0;
}
