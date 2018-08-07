#include <iostream>
using namespace std;

int main() {
	int test,n,i;
	cin>>test;
	while(test--)
	{
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	        cin>>arr[i];
	        
	    int res = 0;
	    for(i=0;i<n;i++)
	        res = res^arr[i];
	        
	   cout<<res<<endl;
	}
	return 0;
}
