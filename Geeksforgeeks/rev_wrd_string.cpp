#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int test,i;
	cin>>test;
	while(test--)
	{
	    string s;
	    stack<char> sa;
	    cin>>s;
	    int len = s.length();
	    for(i=len-1;i>=0;i--)
	    {
	        if(s[i]!='.')
	            sa.push(s[i]);
	        else
	        { while(!sa.empty())
	           { cout<<sa.top();
	            sa.pop();}
	            
	             cout<<".";
	        }
	      
	    }
	    
	    while(!sa.empty())
	           { cout<<sa.top();
	            sa.pop();}
	            cout<<endl;
	}
	return 0;
}
