#include <iostream>
using namespace std;

int main() {
	//code
	int test,n,k,i,res;
	cin>>test;
	while(test--)
	{
	    cin>>n;
	    k = 2;
	    res = 0;
	    for(i=2;i<=n;i++)
	        res = (res+k)%i;
	    cout<<res+1<<endl;
	}
	return 0;
}
