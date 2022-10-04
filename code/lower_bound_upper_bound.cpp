#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5] = {5 ,6 ,7 ,1, 2};
	sort(a,a+5);
	int *p;
	p = lower_bound(a,a+5,4);
	cout<<*p<<endl;
	p = upper_bound(a,a+5,6);
	cout<<*p<<endl;

	vector<int> v = {2,4,1,5,6,7,8,9};
	sort(v.begin(),v.end());
	//{1,2},{3,4},{5,6},{7,8}
	// pair<int,int> p ={2,3};
	auto it = lower_bound(v.begin(),v.end(),3);
	cout<<(*it)<<endl;

	multiset<int> ms= {4,7,5,1,2,3,9};
	// for(auto value:ms){
	// 	cout<<value<<" ";
	// }cout<<endl;
	auto itt = ms.lower_bound(6);
	cout<<(*itt)<<endl;
	return 0;
}