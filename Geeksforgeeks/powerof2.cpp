#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//code
	int test,n;
	cin>>test;
	while(test--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x==1)
	        {
	            cout<<"0"<<endl;
	            continue;
	        }
	    float ans = log(y)/log(x);
	    if( (ans - (int)ans == 0))
	        cout<<"1"<<endl;
	   else 
	        cout<<"0"<<endl;
	}
	return 0;
}
