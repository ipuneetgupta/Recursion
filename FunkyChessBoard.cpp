// FunkyChessBoard
#include<iostream>
using namespace std;
int arr[10][10];
int ans1=0;
int n2=10;
int n1;
 void FunkyChess(int n,int r,int c){
	if(arr[r][c]!=1||r<0||c<0||r>n2-1||c>n2-1)return;
	 arr[r][c]=0;
	 ans1=max(ans1,n+1);
	FunkyChess(n+1,r-2,c-1);
	FunkyChess(n+1,r-2,c+1);
	FunkyChess(n+1,r-1,c-2);
	FunkyChess(n+1,r-1,c+2);
	FunkyChess(n+1,r+1,c-2);
	FunkyChess(n+1,r+1,c+2);
	FunkyChess(n+1,r+2,c-1);
	FunkyChess(n+1,r+2,c+1);
	 arr[r][c]=1;
	return ;
}
int main(){
	cin>>n1;
	int cnt=0;
		for(int i=0;i<n1;i++)
		for(int j=0;j<n1;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1) cnt++;
		}
   	FunkyChess(0,0,0);
		cout<<cnt-ans1<<endl;
	}
