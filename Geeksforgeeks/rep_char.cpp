#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test,n;
	cin>>test;
	while(test--)
	{
	    string s;
	    cin>>s;
	    int len = s.length();
	    set<char> sa;
	    char ne = '-';
	    for(int i=len-1;i>=0;i--)
        {
            if(sa.find(s[i])!=sa.end())
                ne = s[i];
            else
                sa.insert(s[i]);
        }
        if(ne!='-')
            cout<<ne<<endl;
            else
                cout<<"-1"<<endl;
	}
	return 0;
}
