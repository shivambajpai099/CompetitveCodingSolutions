#include <iostream>
using namespace std;

int main() {
	//code
	int test,n,i;
	cin>>test;
	while(test--)
	{
	    string a,b;
	    cin>>a>>b;
	    int len = a.length();
	    if(len!=b.length())
	        {
	            cout<<"0"<<endl;
	            continue;
	        }
	     int cnt,ans;
	     char prev2,prev1;
	     cnt = 0;
	     ans = 1;;
	     for(i=0;i<len;i++)
	     {
	         if(a[i]!=b[i])
	         {
	             if(cnt==2)
	             {
	                 ans = 0;
	                 break;
	             }
	             
	             else if(cnt==0)
	             {
	                 prev1 = a[i];
	                 prev2 = b[i];
	                 cnt++;
	             }
	             
	             else
	             {
	                 if( a[i]==prev2 && b[i]==prev1)
	                    {
	                        cnt++;
	                    }
	               else
	               {
	                   ans = 0;
	                   
	               }
	             }
	         }
	     }
	     
	     if(cnt!=2)
	        ans = 0;
	   cout<<ans<<endl;
	}
	return 0;
}
