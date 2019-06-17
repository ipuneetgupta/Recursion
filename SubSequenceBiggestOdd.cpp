// SubSequenceBiggestOdd
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
   int ans=1;
  	for(int i=0;i<n;i++){
  		for(int j=i;j<n;j++){
  			int flag=1;
  			int k=0;
  			int cnt=0;
  			for( k=i;k<=j;k++){
  				if(arr[k]%2==0){
  					flag=0;
  					break;
  				}
  				if(k<j&&arr[k]==arr[k+1]){
  					cnt++;
  				}
  			}
  			if(flag==1){
  				ans=max(ans,k-i-cnt);
  			}
  		}
  	}
  	cout<<ans<<endl;
}