#include<bits/stdc++.h>
using namespace std;
map<long long int,set<long long int>> m;
bool ispresent(long long int num1,long long int num2){
	// while(size == m[num1].size()){
	// 	return 0;
	// }
	auto it = m.find(num1);
	if(it == m.end()){
		return 0;
	}
	bool flag =0; 
	for(auto value:m[num1]){ 
		// size++;
		bool flag = flag || (value == num2) || (ispresent(value,num2));
		if (flag==1)
			return 1;
	}
 	return 0;

}
int main(){
	long long int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	long long int net;
	

	cin>>net;
	while(net--){
		long long int a,b;
		cin>>a>>b;
		m[a].insert(b);
	}
	
	long long int num1,num2;
	cin>>num1>>num2;
	
	cout<<ispresent(num1,num2);
	


	return 0;
}