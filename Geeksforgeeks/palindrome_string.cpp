#include <iostream>
using namespace std;

int main() {
	//code
	int test,n,i;
	cin>>test;
	while(test--)
	{
	    cin>>n;
	    string s;
	    cin>>s;
	    int len = s.length();
	    int flag = 0;
	    for(i=0;i<((len/2)-1);i++)
	        {
	            if(s[i]!=s[len-i-1])
                    {
                        flag = 1;
                        break;
                    }	                
	        }
	        
	        if(flag==0)
	            cout<<"Yes"<<endl;
	        else
	            cout<<"No"<<endl;
	    
	}
	return 0;
}
