#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		multiset<long long int> ms;
		int n,time;
		cin>>n>>time;
		for(int i=0;i<n;i++){
			long long int no;
			cin>>no;
			ms.insert(no);
		}
		long long int count =0;
		while(time--){
			auto it = ms.end();
			long long int value = (*--it);
			ms.erase(it);
			count+=value;
			ms.insert(value/2);
		}

		cout<<count<<endl;
	}
	return 0;
} 