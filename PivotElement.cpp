#include<iostream>
using namespace std;
int pivot(int arr[],int n){
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	while(start<end){
		
		if(arr[mid]>=arr[0]){
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
	int index=pivot(arr,size);
	cout<<"Pivot element is at "<<index<<endl;
}
