#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,a,b,i;
    cin>>n>>q;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    while(q--)
    {
        cin>>a>>b;
        int min = arr[a];
        for(i=a+1;i<=b;i++)
        {
            if(arr[i]<min)
                min = arr[i];
        }
        
        cout<<min<<endl;
    }
}
