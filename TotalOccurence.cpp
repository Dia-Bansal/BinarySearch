#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	int ans=-1;
	while(start<=end){
		
		if(key==arr[mid]){
			ans=mid;
			end=mid-1;
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=end-1;
		}
		mid=(start+end)/2;
	}
	return ans;
}
int lastoccurence(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	int ans=-1;
	while(start<=end){
		
		if(key==arr[mid]){
			ans=mid;
			start=mid+1;
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=end-1;
		}
		mid=(start+end)/2;
	}
	return ans;
}
int main(){
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		cout<<arr[i]<<" ";
	}
	int key;
	cin>>key;
	int index=firstoccurence(arr,size,key);
	cout<<"The first Occurence is "<<index<<endl;
	int index1=lastoccurence(arr,size,key);
	cout<<"The last Occuerence is "<<index1<<endl;
	
	int total=(index1-index)+1;
	cout<<"Total no of occurence "<<total;
}
