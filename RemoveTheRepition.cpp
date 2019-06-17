// RemoveTheRepition

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  	//logic
  	for(int i=0;i<n-1;i++){
  		if(arr[i]!=arr[i+1]){
           if(i>0&&arr[i]!=arr[i-1]){
           	cout<<arr[i]<<" ";
           }
           if(i==0&&arr[i]!=arr[i+1]){
           	cout<<arr[i]<<" ";
           }
           if(i==n-2&&arr[i+1]!=arr[i]){
           	cout<<arr[i+1]<<" ";
           }
  		}
  	}
  	return 0;
}
//9 11 23 43 43 43 54 65 76 76      