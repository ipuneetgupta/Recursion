// RoundInteger(Codechef)
#include<iostream>
using namespace std;
#define ll long long

bool Check(ll n){
	ll sum=0;
	ll tmp=n;
	while(tmp>0){
		sum+=tmp%10;
		tmp/=10;
	}
	if(sum%10==0) return true;

	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll tmp=n;
		ll sum=0;
		while(tmp>0){
			sum+=tmp%10;
			tmp/=10;
		}
		ll ans=(10*n);
	//	ll res=10-sum%10;
		for(int i=0;i<=9;i++){
			if(Check(ans+i)){
				cout<<ans+i<<endl;
				break;
			}
		}
		//cout<<ans+res<<endl;
	}
}