#include<iostream>
using namespace std;
int peak(int arr[],int n){
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	while(start<end){
		
		if(arr[mid]<arr[mid+1]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		mid=(start+end)/2;
	}
	return start;
}

int main(){
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int index=peak(arr,size);
	cout<<"Peak of mountain is at "<<index<<endl;
}
