#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

bool solution(int x,int y,int z){
    if(x+y<z){
        return false;
    }
    vector<int> direction = {x,-x,y,-y};
    set<int> s;
    queue<int> q;
    s.insert(0);
    q.push(0);
    while(!q.empty()){
        int curr = q.front();
        if(curr == z){
            return true;
        }
        q.pop();
        for(auto directions: direction){
            int total = curr + directions;
            if(total == z){
                return true;
            }
            if(total<0 || total>x+y){
                continue;
            }
            if(s.find(total) == s.end()){
                s.insert(total);
                q.push(total);
            }
        }
    }

    return false;
}

int main()
{
    int x=3;
    int y=5;
    int z=4;
    cout<<solution(x,y,z);
}