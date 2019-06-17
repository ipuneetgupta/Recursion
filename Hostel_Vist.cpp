
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//this represent class for coordinates
class Position{
public:
	ll x,y,dist;
	Position(){
		x=0,y=0,dist=0;
	}
	Position(ll x,ll y,ll dist){
		this->x=x;
		this->y=y;
		this->dist=dist;
	}
	ll Dist(){
		return this->dist;
	}
};
//calculate distance
ll distance(ll x1,ll y1,ll x2,ll y2){
	return x2*x2+y2*y2;
}

//this class for heap
class Compare{
public:
	bool operator()(Position &a, Position &b){
		return a.dist<b.dist;
	}
};

int main(){
	priority_queue<Position,vector<Position>,Compare> list;
	priority_queue<Position,vector<Position>,Compare> dummy;
	ll n,k;
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		int typ;
		cin>>typ;
    //enter the coordinate of hostel
		if(typ==1){
			ll x,y;
			cin>>x>>y;
			ll dist=distance(0,0,abs(x),abs(y));
			Position obj(x,y,dist);
			if(list.size()<k){
              list.push(obj);
			}else{
				Position temp=list.top();
                  if(temp.Dist()>dist){
                       list.pop();
                       list.push(obj);
                  }else{
                        
                  }
			}
		} 
		else{   

           Position temp=list.top();
           cout<<temp.Dist()<<endl;
           		}

	}

}