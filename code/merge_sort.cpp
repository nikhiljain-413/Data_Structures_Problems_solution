#include<bits/stdc++.h>
using namespace std;
void merge_2(int a[],int start, int mid, int end){
	int left_size = mid-start+1;
	int l_a[left_size+1];
	int right_size = end-mid;
	int r_a[right_size+1];
	for(int i=0;i<left_size;i++){
		l_a[i] = a[start+i];
	}
	for(int i=0;i<right_size;i++){
		r_a[i] = a[mid+1+i];
	}
	l_a[left_size] = r_a[right_size] = INT_MAX;
	int l_i = 0;
	int r_i =0;
	for(int i=start;i<=end;i++){
		if(l_a[l_i]<r_a[r_i]){
			a[i] = l_a[l_i++];
		}else{
			a[i] = r_a[r_i++];
		}
	}
}

void merge_1(int a[] , int start, int mid, int end){
	int length = end-start+1;
	int temp[length];
	int k=0,i=start,j=mid+1;
	for(;i<=mid && j<=end ; k++){
		if(a[i]<a[j]){
			temp[k] = a[i++];
			
		}
		else{
			temp[k] = a[j++];
		}
		
	}
	if(j>=end){
		for(;i<=mid;i++){
			temp[k++] = a[i];
		}

	}
	if(i>=mid+1){
		for(;j<=end;j++){
			temp[k++] = a[j];
		}
	}
	for(int i= 0;i<length;i++){
		a[start+i] = temp[i];
	}
}
void mergesort(int a[], int start, int end){
	if(start>=end){
		return;
	}
	int mid = start + (end - start)/2;
	mergesort(a, start, mid);
	mergesort(a, mid+1 , end);
	merge_2(a , start, mid ,end);
}

void printarray(int a[],int n){
	for(int i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[7] = {82,38,43,27,10,3,99};
	
	mergesort(a,0,6);
	
	printarray(a,6);
	return 0;
}