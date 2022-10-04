
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int no;cin>>no;
	    // int a[no],f[no-1];
	    vector<int> m;
	    set<int> s;
	    vector<int> f;
	    for(int i=0;i<no;i++){
	        int a;
	        cin>>a;
	        s.insert(a);
	        m.push_back(a);
	    }
	    sort(m.begin(),m.end());
	    for(int i=0;i<no-1;i++){
	        int a;
	        cin>>a;
	        f.push_back(a);
	    }
	    sort(f.begin(),f.end());
	   
	    if(m[0]-f[0]>0){
	        cout<<f[0]-m[1]<<endl;
	    }else if(m[1]-f[0]>0){
	        cout<<f[0]-m[0]<<endl;
	    }else{
	        int ans = f[0]-m[1];
	        
	        for(auto i:f){
	        	if(s.count(i-ans) == 0){
	        		ans = f[0]-m[0];
	        		break;
	        	}
	        }
	        cout<<ans<<endl;
	    }
	    
	}
	return 0;
}




