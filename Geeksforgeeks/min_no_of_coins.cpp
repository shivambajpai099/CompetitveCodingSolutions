//https://practice.geeksforgeeks.org/problems/number-of-coins/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main() {
	//code
	int test,n,v,i,j;
	cin>>test;
	while(test--)
	{
	    cin>>v>>n;
	    int coin[n];
	    for(i=0;i<n;i++)
	        cin>>coin[i];
	    sort(coin,coin+n);
	    
	    int arr[n+1][v+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=v;j++)
	            arr[i][j] = 0;
	    }
	   
	     int cnt = 1;
	    
	    for(i=0;i<=v;i++)
	    {
	        arr[0][i] = MAX;
	    }
	    
	    for(i=1;i<=n;i++)
	    {
	        for(j=1;j<=v;j++)
	        {
	            if((j>=coin[i-1]) && arr[i][j-coin[i-1]] != INT_MAX)
	                 arr[i][j] = min(arr[i][j-coin[i-1]] + 1, arr[i-1][j]);
    	    else
                arr[i][j] = arr[i-1][j];
	        
	            }
	    }
	    if(arr[n][v]==MAX)
	        cout<<"-1"<<endl;
	   else
	    cout<<arr[n][v]<<endl;
	}
	return 0;
}
