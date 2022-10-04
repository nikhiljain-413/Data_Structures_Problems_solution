#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5] = {9 ,5 ,4 ,6 ,8};
	sort(a,a+5);
	for(auto values:a){
		cout<<values<<" ";
	}

	
	cout<<endl;
	vector<int> v = {8 ,5 ,4 ,7 ,9 ,6};
	sort(v.begin(),v.end());
	for(auto values:v){
		cout<<values<<" ";
	}
	return 0;
}