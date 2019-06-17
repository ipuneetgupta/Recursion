//Subsets Recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > res; 
bool Check(int *arr,int *bit,int n,int k){
	int sum=0;
	for(int i=0;i<n;i++){
           if(bit[i]){
           	sum+=arr[i];
           }
	}
	return sum==k;
}
void Store(int *arr,int *bit,int n){
	vector<int> tmp;
   for(int i=n-1;i>=0;i--){
   	if(bit[i]){
   		tmp.push_back(arr[i]);
   	}
   }
   res.push_back(tmp);
   return;
}
bool compare(vector<int> &a,vector<int> &b){
	if(a.size()<b.size()) return true;
	else if(a.size()==b.size()) return true;
	else return false;
}
void print(){
	for(vector<vector<int> > :: iterator i=res.begin();i!=res.end();i++){
		for(vector<int> :: iterator j=(*i).begin();j!=(*i).end();j++){
			cout<< *j<<" ";
		}
		cout<<endl;
	}
}
void SumSubsequence(int *arr,int *bit,int i,int n,int k){
	//base case
	if(i==n){
		if(Check(arr,bit,n,k)){
			// for(int i=0;i<n;i++){
			// 	if(bit[i]) cout<<arr[i]<<" ";
			// }
			// cout<<endl;
            Store(arr,bit,n);
		}
		return;
	}
  bit[i]=1;
  SumSubsequence(arr,bit,i+1,n,k);
  bit[i]=0;
  SumSubsequence(arr,bit,i+1,n,k);
  return;
}
int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
 	int bit[n]={0};
 int k;
 cin>>k;
   SumSubsequence(arr,bit,0,n,k);
   sort(res.begin(),res.end(),compare);
    print();
}