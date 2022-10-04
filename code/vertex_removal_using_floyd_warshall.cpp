#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int INF=1e9+7;

int graph[N][N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>graph[i][j];
		}
	}
	vector<int> to_remove(n);
	for(int i=0;i<n;i++){
		cin>>to_remove[i];
	}
	reverse(to_remove.begin(),to_remove.end());
	vector<int> ans;
	for(int k=0;k<n;k++){
		int indx = to_remove[k];
		int sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int dis = graph[i][indx] + graph[indx][j];
				graph[i][j] = min(graph[i][j],dis);
			}
		}

		for(int i=0;i<=k;i++){
			for(int j=0;j<=k;j++){
				sum += graph[to_remove[i]][to_remove[j]];
			}
		}
		ans.push_back(sum);
	}
	reverse(ans.begin(), ans.end());
	for(auto val :ans){
		cout<<val<<endl;
	}
	return 0;
}

