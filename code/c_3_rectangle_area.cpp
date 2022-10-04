#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<pair<int,int>> s;
	vector<pair<int,int>> v(n);
	
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v[i] = {a,b};
		s.insert({a,b});

	}
	// for(auto value:v){
	// 	cout<<value.first<<" "<<value.second<<endl;
	// }
	// cout<<endl;
	// for(auto value:s){
	// 	cout<<value.first<<" "<<value.second<<endl;
	// }
	// cout<<endl;
	int min_ar = INT_MAX,max_ar = INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			auto p1 = v[i];
			auto p2 = v[j];
			if(p1.first == p2.first) continue;
			if(p1.second == p2.second) continue;
			if(p1.first>p2.first) swap(p1,p2);
			int x1 =p1.first, y1 = p2.second;
			int x2 = p2.first,y2 = p1.second;
			// cout<<x1<<" "<<y1<<endl;
			// cout<<x2<<" "<<y2<<endl;
			if(s.count({x1,y1}) && s.count({x2,y2})){
				int area = abs(x2 - x1)*abs(y2 - y1);
				// cout<<area<<endl;
				min_ar = min(min_ar,area);
				max_ar = max(max_ar,area);
			} 

		}
	}
	if(min_ar == INT_MAX){
		cout<<-1<<endl;
	}
	else{
		cout<<max_ar - min_ar<<endl;
	}
	return 0;
}