#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	string s;
	getline(cin,s);
	for (int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			cout<<endl;
		}
		else
		{
			cout<<(char)((s[i] - 'a')+'A');
		}
	}
	return 0;
}