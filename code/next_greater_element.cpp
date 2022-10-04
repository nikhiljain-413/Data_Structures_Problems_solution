#include<bits/stdc++.h>
using namespace std;

vector<int> Next_greater_element(vector<int> v){
	vector<int> nge(v.size());
	stack<int> st;
	for(int i=0;i<v.size();i++){
		while(!st.empty() && v[st.top()]<v[i]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}

	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}
	return nge;
}
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	// for(int i=0;i<n;i++){
		
	// 	cout<<v[i]<<" ";
	// }
	vector<int> nge = Next_greater_element(v);
	// for(int i=0;i<n;i++){
 //        int value;
 //        nge[i] == -1? value = -1:value = v[nge[i]];
	// 	cout<<v[i]<<" "<<value<<endl;
	// }
	for(int i=0;i<n;i++){
		cout<<v[i]<<" "<<(nge[i] == -1? nge[i]:v[nge[i]])<<endl;
	}
	return 0;
}