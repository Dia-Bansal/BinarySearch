#include<iostream>
using namespace std;
int binarysearch(int arr[],int n){
    int key;
    cin>>key;
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;   
        
    }
    return -1;
    
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    int index=binarysearch(arr,size);
    cout<<"index is "<<index;
}
