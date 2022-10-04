#include<bits/stdc++.h>
using namespace std;
vector<int> v  ={3,10,5,20};
long long solve(int N,int K)
    {
    	multiset<long long> ms;
    	
    	for(auto value: v){
    		ms.insert(value);
    	}
    	long long val = *(--ms.end());
        // add your code here
        for(int i=0;i<K-1;i++){
        	ms.erase(--ms.end());
        }
        long long sum=0;
        for(auto val:ms){
        	sum+= val;
        }
        return max(sum,val);
        return sum;
       
    }
int main(){
	long long ans = solve(4,2);
	cout<<ans;
	return 0;
}