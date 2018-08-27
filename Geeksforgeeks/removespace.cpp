#include <iostream>
using namespace std;

int main() {
	//code
	int n,i;
	cin>>n;
	while(n--)
	{
	char s[1001];
	scanf(" %[^\n]s",s);
	
	i = 0;
	int cnt = 0;
	while(s[i])
	{
	    if(s[i]!= ' ')
	        s[cnt++] = s[i];
	   i++;
	}
	s[cnt] = '\0';
	cout<<s<<endl;
	}
	return 0;
}
