#include<bits/stdc++.h>
using namespace std;
int main(){
	int x_or;
	cin>>x_or;
	int a=0,b=0;
	int xor_length = log(x_or) +1;
	vector<int> set_bit;
	for(int i=0;i<=xor_length;i++){
		if((x_or & 1<<i)==0){
			a = a|1<<i;
			b = b|1<<i;
		}else{
			set_bit.push_back(i);
		}
	}
	
	int length = set_bit.size();
	int mask_len = 1<<length;
	int ans = 0;
	for(int mask=0; mask<mask_len; mask++){
		int local_a = a;
		int local_b = b;

		for(int j=0; j<length; j++){
			if(mask & (1<<j)){
				local_a = local_a| (1<<set_bit[j]);
			}else{
				local_b = local_b| (1<<set_bit[j]);
			}
		}

		ans = max(ans,local_a * local_b);
	}
	 
	cout<<ans<<endl;
	return 0;
}