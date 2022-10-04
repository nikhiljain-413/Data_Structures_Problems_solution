#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int , string> p;
	p = make_pair(1 , "nikhil");
	cout<<p.first<<" "<<p.second<<endl;

	pair<int ,string> p1;
	p1 = {2, "jain"};
	cout<<p1.first<<" "<<p1.second<<endl;

	pair<int , string> p3[3];
	p3[0] = {1,"mom"};
	p3[1] = {2, "dad"};
	p3[2] = {3, "sister"};

	for(int i=0;i<3;i++){
		cout<<p3[i].first<<" "<<p3[i].second<<endl;
	}
	return 0;
}