#include<bits/stdc++.h>
using namespace std;

void printvector(vector<pair<int, int>> v){
	cout<<"Size is: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

void printvector(vector<int> temp){
	cout<<"size is: "<<temp.size()<<endl;
	for(int i=0;i<temp.size();i++){
		cout<<temp[i]<<" ";
	}
	cout<<endl;
}
int main(){
	// vector<pair<int, int>> v;
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	int x,y;
	// 	cin>>x>>y;
	// 	v.push_back({x,y});
	// }

	// printvector(v);

	// vector<vector<int>> vv;
	// int n;
	// cin>>n;
	// while(n--){
	// 	int size;
	// 	cin>>size;
	// 	vector<int> temp;
	// 	for(int i=0;i<size;i++){
	// 		int no;
	// 		cin>>no;
	// 		temp.push_back(no);
	// 	}
	// 	vv.push_back(temp);
	// }

	// for(int i=0;i<vv.size();i++){
	// 	printvector(vv[i]);
	// }

	vector<int> v[4];
	for(int i=0;i<4;i++){
		int size;
		cin>>size;
		for(int j=0;j<size;j++){
			int no;
			cin>>no;
			v[i].push_back(no);
		}

	}
	for(int i=0;i<4;i++){
		printvector(v[i]);
	}
	return 0;
}