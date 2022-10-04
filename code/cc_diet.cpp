#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int days,amount;
	    cin>>days>>amount;
	    int total = 0;
	    int flag=1;
	    int day=0;
	    for(int i=1;i<=days;i++){
	        int a;cin>>a;
	        if(flag==0){
	        	continue;
	        }
	        total+=a;
	        if(total>=amount){
	            total-=amount;
	            cout<<total<<" ";
	        }else{
	            flag=0;
	            day = i;
	        }
	    }
	    if(flag == 1){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<" "<<day<<endl;
	    }
	}
	return 0;
}
