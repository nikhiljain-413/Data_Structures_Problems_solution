#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,i;
	cin>>a>>b>>c;
	 for(i=1 ; c>0;i++){
	 	if(i%a ==0 || i%b==0){
	 		c--;
	 	}
	}
	i--;
	int lcm;

	for(int i=1;i<=a*b;i++){
		if(i%a ==0 && i%b==0){
			lcm = i;
			break;
		}
	}

	if(i%(a*b) == 0){
		while(i>=0){
			cout<<i<<" ";
			i = i-lcm;
		}
	}
	else if(i%a == 0){
		while(i>=0){
			cout<<i<<" ";
			i = i-a;
		}
	}
	else{
		while(i>=0){
			cout<<i<<" ";
			i = i-a;
		}
	}
	return 0;
}