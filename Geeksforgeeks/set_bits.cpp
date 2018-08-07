#include <iostream>
using namespace std;

int main() {
	//code
	int test,n,i;
	cin>>test;
	while(test--)
	{
		cin>>n;
		int c,coun,num;
		coun = c = 0;
		for(i=1;i<=n;i++)
		{
			num = i;
			
			while(num!=0)
			{	
				c = num&1;
				coun = coun +c;
				num = num>>1;
				
			}
		}

		cout<<coun<<endl;
	}
	return 0;
}
