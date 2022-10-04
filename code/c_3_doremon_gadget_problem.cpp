#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		multiset<int> ms;
		for(int i=0;i<n;i++){
			int no;cin>>no;
			ms.insert(no);
		}
		// for(auto value:ms){
		// 	cout<<value<<" ";
		// }
		// cout<<endl;
		int nn;
		cin>>nn;
		// vector<int> v(nn);
		for(int i=0;i<nn;i++){
			int gadget;
			cin>> gadget;
			int count = ms.count(gadget);
			for(int j=0;j<count;j++){
				cout<<gadget<<" ";
			}
			ms.erase(gadget);

		}

		for(auto value:ms){
			cout<<value<<" ";
		}
		cout<<endl;
		// for(auto value:v){
		// 	cout<<value<<" ";
		// }
		// cout<<endl;
		// for(int i=0;i<nn;i++){
		// 	int count = ms.count(v[i]);
		// 	for(int j=0;j<count;j++){
		// 		cout<<v[i]<<" ";
		// 	}
		// 	ms.erase(v[i]);
		// }
		// for(auto value:ms){
		// 	cout<<value<<" ";
		// }
		// cout<<endl;
	}
	

	return 0;
}