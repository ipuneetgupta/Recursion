// ReplaceAllPi
#include<iostream>
using namespace std;
string ReplaceAllPi(string str){
	//base case
	if(str.size()==0) return "";
	string ros="";
	if(str[0]=='p'&&str[1]=='i'){
		ros+="3.14";
		ros+=ReplaceAllPi(str.substr(2));
	}
	else {
		ros+=str[0];
		ros+=ReplaceAllPi(str.substr(1));
	}
	return ros;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
     cout<<ReplaceAllPi(str)<<endl;
	}
	return 0;
}