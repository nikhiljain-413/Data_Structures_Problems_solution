#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int total;cin>>total;
		cout<<__builtin_popcount(total)<<endl;
	}
	
	return 0;
}

// suppose 1st day n1  -->beg;
// 				2n1 -->god;

// suppose 1st day n2  -->beg;
// 			total 2n1+n2;
// 				2*(2n1+n2) == 2^2n1 + 2n2-->god;

// suppose 1st day n3  -->beg;
// 			total 2^2n1 + 2n2 + n3;
// 			2*(2^2n1 + 2n2 + n3) == 2^3n1 + 2^2n2 + 2n3 -->god;
			
// 			.
// 			.
// 			.
// 			.
// 			.


// suppose n th day nn  -->beg;
// 			total 2^n-1n1 + .................+ 2n-1+nn;
// 			2*(2^2n1 + 2n2 + n3) == 2^n n1 + .................. + 2^2n-1 + 2nn -->god;



// this seems like binary representation of a number 
// and we have to count the minimum no daya the person 
// will go to god to get exactly the sum 
// is similar as no of 1 bit in present in sum's binary representation.
