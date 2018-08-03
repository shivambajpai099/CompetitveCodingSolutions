#include <iostream>
using namespace std;

int main() {
	//code
	int test,i;
	cin>>test;
	while(test--)
	{   string arr;
	    cin>>arr;
	    
	   
	    int i =0;
	    int len = arr.length();
	       ;
	  
	    int start,end,temp;
	    start = 0;
	    end = len-1;
	    while(start<end)
	    {
	     
	      if(arr[start]!= 'a' && arr[start]!= 'e' && arr[start]!= 'o' && arr[start]!= 'i' && arr[start]!= 'u')
	        { start++;
	          continue;
			}			
	       
	   if(arr[end]!= 'a' && arr[end]!= 'e' && arr[end]!= 'o' && arr[end]!= 'i' && arr[end]!= 'u')
	        { end--;
			continue;
		}
	   	
	 swap(arr[start],arr[end]);
	   start++;
	   end--;
	        
	    }
	   
    cout<<arr<<endl;
	  
	}
	return 0;
}
