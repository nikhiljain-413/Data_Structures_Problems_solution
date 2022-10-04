#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> ship(n);
		int distance,food;
		cin>>distance>>food;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			ship[i].first = distance - a;
			ship[i].second = b;

		}
		sort(ship.begin(), ship.end());
		multiset<int> food_avl;
		int can_reach = 1;
		int ans=0;
		int current = 0;
		for(int i=1;i<distance;i++){
			food--;
			if(ship[current].first == i){
				food_avl.insert(ship[current].second);
				current++;
			}
			if(food == 0){
				if(food_avl.size() == 0){
					can_reach = 0;
					break;
				}else{
					auto it = --food_avl.end();
					food += (*it);
					food_avl.erase(it);
					ans++;
				}
			}
		}
		if(can_reach == 1){
			cout<<ans<<endl;
		}else{
			cout<<-1<<endl;
		}

	}
	return 0;
}