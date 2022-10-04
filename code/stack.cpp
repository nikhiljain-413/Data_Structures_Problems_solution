#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> s;
	queue<string> q;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;

	q.push("abc");
	q.push("def");
	q.push("ghi");
	q.push("jkl");

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	return 0;
}