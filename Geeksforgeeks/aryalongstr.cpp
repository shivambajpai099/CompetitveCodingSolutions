#include <iostream>
using namespace std;

int main() {
	//code
	int test,n,k,i,cnt;
	cin>>test;
	while(test--)
	{   int cnt = 0;
	    string s;
	    cin>>s;
	    char c;
	    cin>>k>>n>>c;
	    int len = s.length();
	    int tlen = len*k;
	    int q = n/len;
	    for(i=0;i<len;i++)
	    {
	        if(s[i]==c)
	            cnt = cnt + q;
	    }
	    int st = n%(len);
	    for(i=0;i<st;i++)
            if(s[i]==c)
                cnt++;
                
        cout<<cnt<<endl;
	}
	
	
	return 0;
}
