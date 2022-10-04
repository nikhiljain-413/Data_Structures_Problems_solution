#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-7;
double multiply(double mid,int n){
	double ans=1;
	while(n--){
		ans*=mid;
	}
	return ans;
}
// void clculate_root(int n)
int main(){
	double x;
	int n;
	cin>>x>>n;
	double low=1,high=x,mid;
	while((high - low)>eps){
		mid = (high+low)/2;
	
		if(multiply(mid,n)<x){
			low = mid;
		}else{
			high = mid;
		}
	}
	
	cout<<setprecision(10)<< low<<" "<<high<<endl;
	cout<<pow(x,1.0/2);
	return 0;
}