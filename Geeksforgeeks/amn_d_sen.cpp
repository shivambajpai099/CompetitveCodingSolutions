#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int test,n,i,j;
	cin>>test;
	while(test--)
	{
	    string s;
	    cin>>s;
	    int len = s.length();
	    int flag = 1;
	    for(i=0;i<len;i++)
	    {  
	        if((int)s[i]<91)
	            {   
	                    
	                s[i] = s[i] + 32;
	                if(flag==0)
	                    cout<<" "<<s[i];
	                else
	                    cout<<s[i];
	                
	            }
	       
	       else
	            cout<<s[i];
	            
	            
	       flag = 0;
	            
	    }
	    cout<<endl;
	}
	return 0;
}
