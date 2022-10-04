#include<bits/stdc++.h>
using namespace std;

bool solution(int x, int y, int z){
    if(x+y < z){
        return false;
    }
    vector<int> directions= {x,-x,y,-y};
    set<int> visited;
    queue<int> q;
    visited.insert(0);
    q.push(0);
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int direction: directions){
            int total = curr + direction;
            if(total == z){
                return true;
            }
            if(total<0 || total>x+y){
                continue;
            }
            if(visited.find(total) == visited.end()){
                q.push(total);
                visited.insert(total);
            }
        }
    }
    return false;
}

int main(){
    int capacity_j1 = 3;
    int capacity_j2 = 5;
    int measure = 4;
    cout<<solution(capacity_j1, capacity_j2, measure);
}