#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,k,i,j;
    cin>>n>>k;
    int sum = 0;
    int a,b;
     vector < pair<int,int> > v;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
            
    }
    
    sort(v.begin(),v.end());
    int cnt = 0;
    for(i=n-1;i>=0;i--)
    {
        if(v[i].second==0)
            sum = sum + v[i].first;
        else if(cnt<k)
        {
            cnt++;
            sum = sum+ v[i].first;
        }
        
        else
            sum = sum - v[i].first;
    }
    cout<<sum<<endl;
    
    
}

