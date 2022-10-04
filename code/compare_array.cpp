#include<bits/stdc++.h>
using namespace std;
void nikh(int A[][2]){
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
		cout<<A[i][j]<<" ";
	}}
}
int main(){
	int A[][2] = {{2,1},{3,1},{4,1}};
	int B[] = {2,3,4};
	// if(A==B){
	// 	cout<<"yes";
	// }else{
	// 	cout<<"No";
	// }
	nikh(A);
	return 0;
}

