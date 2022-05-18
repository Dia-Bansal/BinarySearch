#include<iostream>
using namespace std;
int squareRoot(int n){
    int start=0;
    int end=n-1;
    long long int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
    	long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square>n){
            end=mid-1;
        }
        else{
        	ans=mid;
            start=mid+1;
        }
        mid=(start+end)/2;    
        
    }
    return ans;
    
}
double moreprecision(int n,int precision,int index){
	double factor=1;
	double ans=index;
	for(int i=0;i<precision;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
    int index=squareRoot(n);
    cout<<"Square Root is "<<moreprecision(n,3,index);
    
}
