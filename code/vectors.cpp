#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v ){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		v.push_back(no);
	}
	// printvector(v);
	// cout<<endl;
	// vector<int> v1(5);
	// v1.push_back(10);
	// cout<<v1.size()<<endl;
	// printvector(v1);
	// cout<<endl;
	// v1.pop_back();
	// cout<<endl;
	// cout<<v1.size()<<endl;
	// printvector(v1);

	vector<int> v2 =v;
	vector<int> &v3 =v;
	v[1] = 10;
	printvector(v2);
	cout<<endl;
	printvector(v);
	cout<<endl;
	printvector(v3);
	return 0;
}