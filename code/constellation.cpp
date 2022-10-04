#include<bits/stdc++.h>
using namespace std;
char A[][3] = {{'.','*','.'},{'*','*','*'},{'*','.','*'}};
char E[][3] = {{'*','*','*'},{'*','*','*'},{'*','*','*'}};
char I[][3] = {{'*','*','*'},{'.','*','.'},{'*','*','*'}};
char O[][3] = {{'*','*','*'},{'*','.','*'},{'*','*','*'}};
char U[][3] = {{'*','.','*'},{'*','.','*'},{'*','*','*'}};

char check(char image[][3]){
	int flag = 1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(A[i][j] != image[i][j]){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			break;
		}
	}
	if(flag == 1){
		return 'A';
	}


	flag = 1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(E[i][j] != image[i][j]){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			break;
		}
	}
	if(flag == 1){
		return 'E';
	}

	flag = 1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(I[i][j] != image[i][j]){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			break;
		}
	}
	if(flag == 1){
		return 'I';
	}

	flag = 1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(O[i][j] != image[i][j]){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			break;
		}
	}
	if(flag == 1){
		return 'O';
	}

	flag = 1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(U[i][j] != image[i][j]){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			break;
		}
	}
	if(flag == 1){
		return 'U';
	}

	
}
int main(){
	int n;
	cin>>n;
	char a[3][n];
	char image[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	for(int i=0;i<n;i++){
		if(a[0][i] == '#'){
			cout<<'#';
		}else if(a[0][i]=='.' && a[1][i] == '.' && a[2][i] =='.'){
			continue;
		}else{
			int col = i;
			for(int j=0;j<3;j++){
				for(int k=i;k<i+3;k++){
					image[j][k-col] = a[j][k];
				}
			}
			
			cout<<check(image);
			i+=2;
		}
	}
	return 0;
}
