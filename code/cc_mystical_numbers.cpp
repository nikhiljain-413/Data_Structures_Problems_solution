#include<bits/stdc++.h>
using namespace std;
int cnt_digits(int num){

	if(num == 0){
		return 0;
	}
	int cnt=1;
	while(num >> 1){
		num = num>>1;
		// cout<<num<<" ";
		cnt++;
	}
	return cnt;
}

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int s;cin>>s;
	    int a[s];
	    for(int i=0;i<s;i++){
	        cin>>a[i];
	    }
	    
	    int ans[32][s+1] = {0};
	    for(int j=0;j<32;j++){
	    	for(int i=0;i<=s;i++){
	    	
	    		ans[j][i] = 0;
	    	}
	    
	    }


	    for(int i=1;i<=s;i++){
	    	int no_of_digit = cnt_digits(a[i-1]);

	    	ans[no_of_digit][i] = 1; 
	    	
	    }
	    for(int i=1;i<=s;i++){
	    	for(int j=1;j<32;j++){
	    	
	    		ans[j][i] = ans[j][i-1]+ ans[j][i];
	    		  
	    	}
	    }
	    for(int i=0;i<6;i++){
	    	for(int j=0;j<=s;j++){
	    		cout<<ans[i][j]<<" ";
	    	}
	    	cout<<endl;
	    }
	    int q;cin>>q;
	    while(q--){
	    	int f,l,p;
	    	cin>>f>>l>>p;
	    	int dig = cnt_digits(p);
	    	
	    	
	    	cout<<l-f+1 - ans[dig][l] +ans[dig][f-1]<<endl;
	    }
	    
	}
	return 0;
}
