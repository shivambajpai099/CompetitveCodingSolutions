#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int len = s.length();
        int v,c,i;
        v = 0;
        c = 0;
        int flc,flv;
        flc = flv = 0;
        unordered_map<char,int> hash;
        hash['a'] = 1;
        hash['e'] = 1;
        hash['o'] = 1;
        hash['i'] = 1;
        hash['u'] = 1;
        for(i=0;i<len;i++)
        {   
            if(c>3 || v>5)
            {
                
                break;
            }
            
            if(s[i]=='?')
            {
                c++;
                v++;
            }
            else if(hash.find(s[i])==hash.end())
            { 
                v = 0;
                c++;
            }
            else
               {
                    v++;
                    c = 0;
            
                }
        }
        
        if(c>3 || v>5)
            {
                cout<<"0"<<endl;
            }
        else
            cout<<"1"<<endl;
            
    }
	return 0;
}
