#include<bits/stdc++.h>
using namespace std;
int binarySearch(int no,vector<int> &v,int low,int high){
	
	int mid = low + (high-low)/2;
	if(v[mid] == no){
		return mid;
	}
	else if(low == high){
		return -1;
	}
	else if(v[mid]>no){
		binarySearch(no,v,low,mid);
	}else{
		binarySearch(no,v,mid+1,high);
	}
	
}
int main(){
	vector<int> v ={2,3,4,6,8,9};
	// int indx = binarySearch(i,v,0,5);
	// if(indx != -1){
	// 	cout<<"present at index: "<<indx<<endl;
	// }else{
	// 	cout<<"element not present in vector"<<endl;
	// }
	int to_find = 8;
	int low=0,high=5;
	while(high-low>1){
		int mid = (high+low)/2;
		if(v[mid]<to_find){
			low = mid+1;
		}else{
			high = mid;
		}
	}
	if(v[low] == to_find){
		cout<<"present at index: "<<low;
	}else if(v[high] == to_find){
		cout<<"present at index: "<<high;
	}else{
		cout<<"Not Found";
	}
	return 0;
}