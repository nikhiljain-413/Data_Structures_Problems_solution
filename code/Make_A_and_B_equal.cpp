
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;cin>>t;
	while(t--){
	    long long int n;cin>>n;
	    long long int a[n],b[n];
	    long long int sum1=0,sum2 =0;
	    for(long long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(long long int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    long long int diff = 0,abs_diff = 0;
	    for(long long int i=0;i<n;i++){
	        long long int d = a[i] - b[i];
	        diff+=d;
	        abs_diff+= abs(d);
	    }
        // cout<<abs_diff<<" "<<diff<<endl;
	    if(diff == 0){
	        cout<<abs_diff/2<<endl;
	    }else{
	        cout<<-1<<endl;
	    }

	}
	return 0;
}
