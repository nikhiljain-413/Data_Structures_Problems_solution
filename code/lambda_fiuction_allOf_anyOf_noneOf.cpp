#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<[](int x,int y){return x+y;}(2,3)<<endl;
	auto sum = [](int x,int y){return x+y;};
	cout<<sum(4,3)<<endl;

	vector<int> v ={6,2,4};
	cout<<all_of(v.begin(), v.end(),[](int x){return x>0;});
	cout<<endl;
	cout<<any_of(v.begin(), v.end(),[](int x){return x>0;});
	cout<<endl;
	cout<<none_of(v.begin(), v.end(),[](int x){return x>0;});
	cout<<endl<<endl;

	vector<int> vv ={6,2,4};
	cout<<all_of(vv.begin(), vv.end(),[](int x){return x%2==0;});
	cout<<endl;
	cout<<any_of(vv.begin(), vv.end(),[](int x){return x%2==0;});
	cout<<endl;
	cout<<none_of(vv.begin(), vv.end(),[](int x){return x%2==0;});
	return 0;


}