#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
long long int arr[26][N];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		for(int i=0;i<26;i++){
			for(int j=0;j<N;j++){
				arr[i][j] = 0;
			}
		}

		for(int i=0;i<n;i++){
			arr[s[i]-'a'][i+1]++;
		}

		for(int i=0;i<26;i++){
			for(int j=1;j<=n;j++){
				arr[i][j] += arr[i][j-1];
			}
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			int oddCount = 0;
			for(int i=0;i<25;i++){
				if((arr[i][r] - arr[i][l-1] )%2!=0){
					oddCount++;
				}
			}
			if(oddCount>1){
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}


		}

	}
	return 0;
}