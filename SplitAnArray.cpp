// SplitAnArray
#include<iostream>
using namespace std;
int cnt=0;
void PrintArray(int *arr,int n,int *a){
	for(int i=0;i<n;i++){
		if(arr[i]==1)
       cout<<a[i]<<" ";
	}
	cout<<"and ";
	for(int i=0;i<n;i++){
		if(arr[i]==0)
       cout<<a[i]<<" ";
	}
	cnt++;
	cout<<endl;
}
bool CheckArray(int *arr,int n,int *a){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1) sum+=a[i];
		else sum-=a[i];
	}

	return sum==0;
}
void subsequence(int *arr,int *out,int i,int n){
	//base case
  if(i==n){
  	if(CheckArray(out,n,arr))
  	  PrintArray(out,n,arr);
  	return;
  }
  //including
  out[i]=1;
  subsequence(arr,out,i+1,n);
  //excluding
  out[i]=0;
  subsequence(arr,out,i+1,n);
  return;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int out[n]={0};
  subsequence(arr,out,0,n);
  cout<<cnt;
}