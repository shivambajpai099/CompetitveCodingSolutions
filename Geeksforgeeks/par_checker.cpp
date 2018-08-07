#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	
	int test,n,i;
	cin>>test;
	while(test--)
	{
	    string ab;
	    stack<char> s;
	    cin>>ab;
	    int len = ab.length();
	    int flag = 1;
	    for(i=0;i<len;i++)
	    {   
	        if(ab[i]=='}' || ab[i] == ']' || ab[i]==')')
	        {
	            if(!s.empty())
	            {
	                char val = s.top();
	               
	                if(ab[i] == ')')
	                {
	                    if(val=='(')
	                       { s.pop();
	                            continue;}
	                   else
	                   {
	                       flag = 0;
	                       break;
	                   }
	                }
	                
	                else if(ab[i]==']')
	                {
	                    if(val=='[')
	                       { s.pop();
	                        continue;
	                       }
	                   else
	                   {
	                       flag = 0;
	                       break;
	                   }
	                    
	                }
	                
	                else if(ab[i]=='}')
	                {
	                    if(val=='{')
	                       { s.pop();
	                        continue;}
	                   else
	                   {
	                       flag = 0;
	                       break;
	                   }
	                }
	            }
	            
	            else
	            {
	                flag = 0;
	                break;
	            }
	        }
	        
	        else
	            s.push(ab[i]);
	    }
	    
	    if(flag && s.empty())
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
	}
	return 0;
	
}
