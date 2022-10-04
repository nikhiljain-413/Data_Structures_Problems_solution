#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		arr[i] = no%m;;
	}
	sort(arr,arr+n);
	int q;cin>>q;
	while(q--){
		int x;
		cin>>x;
		 x=x%m;
		 int our_no = m-1-x;
		 auto ptr = upper_bound(arr,arr+n,our_no);
		 if(ptr != arr){
		 	ptr--;
		 }
		 cout<<max(((*ptr)+x)%m , (arr[n-1]+x)%m)<<endl;

	}
	return 0;
}