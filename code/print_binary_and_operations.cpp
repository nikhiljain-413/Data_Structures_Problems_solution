#include<bits/stdc++.h>
using namespace std;
void printbinary(int num){
	for(int i=10;i>=0;i--){
		cout<<((num>>i) & 1);
	}
	cout<<endl;
}
using namespace std;
int main(){

	int num = 12;
	printbinary(num);
	int i = 1;
	printbinary(num | (1<<i));
	i = 2;
	printbinary(num & ~(1<<i));
	i=1;
	printbinary(num ^ (1<<i));
	int cnt =0;
	printbinary(13);
	for(int i=3;i>=0;i--){
		if((1<<i & num)!=0){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	cout<<__builtin_popcount(num)<<endl;
	cout<<__builtin_popcountll((1ll<<35)-1)<<endl;
	for(char i='A'; i<='Z'; i++){
		cout<<i<<" ";
		printbinary(int(i));
		cout<<char(i-'A'+'a')<<" ";
		printbinary(int(i-'A'+'a'));
		cout<<endl;
	}
	char A = 'A';
	char a = A | (1<<5);
	cout<< a << endl;
	printbinary(int(' '));
	printbinary(int('_'));
	cout<<char(A|' ');
	cout<<char(a & '_')<<endl;
	printbinary(127);
	printbinary(127 & (~((1<<5) - 1)));

	return 0;
}